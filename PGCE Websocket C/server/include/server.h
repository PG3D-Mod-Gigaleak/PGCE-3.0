#include <climits>
#include <cstdio>
#include <cstdlib>
#include "database.h"
#include "enet.h"
#include "packets/packet.h"
#include <cstring>
#include <list>
#include <string>
#include <thread>

#include "json.hpp"
#include "player_data.h"

#define SERVER_ACCEPT 8
#define SERVER_DENY 13

#define PACKET_HANDSHAKE 0x01
#define PACKET_REGISTER_SESSION 0x02
#define PACKET_INFO 0x03

#define ACCEPT_PACKET(PACKET_TYPE) {char* data = new char[2]{PACKET_TYPE, SERVER_ACCEPT};\
	packets::packet(data, 2).send(event.peer, true);\
	delete[] data;}

#define DENY_PACKET(PACKET_TYPE) {char* data = new char[2]{PACKET_TYPE, SERVER_DENY};\
	packets::packet(data, 2).send(event.peer, true);\
	delete[] data;}

namespace server
{
	struct player_session
	{
		ENetPeer* peer;
		bool accepted = false;
		uint64_t encryption_key;

		player::player_data data;

		player_session(ENetPeer*& peer, uint64_t enc_key)
		{
			this->peer = peer;
			this->encryption_key = enc_key;
		}
	};

	bool server_on;

	void server_thread()
	{
		printf("Starting ENet server...\n");
		srand(time(NULL));
		ENetAddress address;
		ENetHost* server;

		address.host = ENET_HOST_ANY;
		address.port = 9605;

		server = enet_host_create(&address, 64, 0, 0, 0);

		if (server == nullptr)
		{
			printf("Failed to create server.\n");
			return;
		}

		server_on = true;
		printf("Server started.\n");

		ENetEvent event;

		while (server_on) {
			while (enet_host_service(server, &event, 1000) > 0) {
				switch (event.type) {
					case ENET_EVENT_TYPE_CONNECT: {
						break;
					}
					case ENET_EVENT_TYPE_RECEIVE: {
						/*printf("Client sent: ");
						for (int i = 0; i < event.packet->dataLength; i++) {
							printf("%02x ", event.packet->data[i]);
						}
						printf("\n");*/
						switch (event.packet->data[0])
						{
							case PACKET_HANDSHAKE: {
								std::string enc_key = std::to_string(rand() % 0xF0CE552E770CA5A+1);

								char* data = new char[enc_key.length()+2]{0x01};
								strcat(data, enc_key.c_str());
								
								player_session session = player_session(event.peer, std::stoull(enc_key));
								event.peer->data = &session;

								packets::packet(data, 2+enc_key.length()).send(event.peer, true);

								delete[] data;
								break;
							}
							case PACKET_REGISTER_SESSION: {
								#define GUID_SIZE 36
								#define MAX_ID_SIZE 19

								#define ID_IDX 1 + GUID_SIZE + 1

								#define MAX_PACKET_SIZE 2 + ID_IDX + MAX_ID_SIZE

								if (event.peer->data != nullptr && event.packet->dataLength <= MAX_PACKET_SIZE) {
									if (event.packet->data[1] == GUID_SIZE && (event.packet->data[ID_IDX] <= MAX_ID_SIZE && event.packet->data[ID_IDX] > 0) && event.packet->dataLength == 2+GUID_SIZE+1+event.packet->data[ID_IDX]+1) {
										player_session* session = (player_session*)event.peer->data;

										session->data.auth_key = std::string((char*)event.packet->data+2, GUID_SIZE);

										std::string a = std::string((char*)event.packet->data+ID_IDX+1, event.packet->data[ID_IDX]);

										session->data.id = std::stoull(a);

										if (database::is_auth_key_valid(session->data.id, session->data.auth_key)) {
											player::load(session->data.id, session->data);
											session->accepted = true;
											ACCEPT_PACKET(PACKET_REGISTER_SESSION);
										} else {
											DENY_PACKET(PACKET_REGISTER_SESSION);
										}
									} else {
										DENY_PACKET(PACKET_REGISTER_SESSION);
									}
								} else {
									DENY_PACKET(PACKET_REGISTER_SESSION);
								}
								break;
							}
							case PACKET_INFO: {
								if (event.peer->data != nullptr) {
									player_session* session = (player_session*)event.peer->data;
								} else {
									DENY_PACKET(PACKET_INFO);
								}
								break;
							}
						}
						enet_packet_destroy(event.packet);
						break;
					}
					case ENET_EVENT_TYPE_DISCONNECT: {
						break;
					}
				}
			}
		}
	}

	int start()
	{
		if (enet_initialize() != 0)
		{
			printf("Failed to initialize ENet.\n");
			return 1;
		}

		atexit(enet_deinitialize);
		std::thread(server_thread).join();

		return 0;
	}
}
#include <cstdio>
#include <cstdlib>
#include "enet.h"
#include "packets/register.h"
#include <thread>

#define ARR_SIZE(_ARR) ((int)(sizeof(_ARR) / sizeof(*(_ARR))))

namespace client
{
	ENetPeer* peer;
	uint64_t encryption_key;
};

#include "packets/handshake.h"

namespace client
{
	bool client_on;

	int id;
	std::string authKey;

	void end()
	{
		enet_peer_disconnect(peer, 0);
	}

	void client_thread()
	{
		printf("Starting ENet client...\n");
		ENetHost* client = { 0 };
		client = enet_host_create(nullptr, 1, 0, 0, 0);

		if (client == nullptr)
		{
			printf("An error occurred while trying to create an ENet client host.\n");
			return;
		}

		client_on = true;
		ENetAddress address;
		ENetEvent event;

		enet_address_set_host(&address, "127.0.0.1");
		address.port = 9605;

		peer = enet_host_connect(client, &address, 2, 0);

		if (peer == nullptr)
		{
			printf("No available peers for initiating an ENet connection.\n");
			return;
		}

		if (enet_host_service(client, &event, 1000) > 0 && event.type == ENET_EVENT_TYPE_CONNECT) {
			printf("Connected.\n");
			packets::handshake().send(peer);
		} else {
			enet_peer_reset(peer);
			printf("Connection failed.\n");
			client_on = false;
		}

		while (client_on)
		{
			while (enet_host_service(client, &event, 0) > 0)
			{
				switch (event.type)
				{
				case ENET_EVENT_TYPE_RECEIVE:
					if (event.packet->dataLength >= 1)
					{
						switch (event.packet->data[0])
						{
							case 0x01: {
								packets::handshake(event.packet);
								break;
							}
							case 0x02: {
								packets::pregister(event.packet);
								break;
							}
						}
					}
					enet_packet_destroy(event.packet);
					break;
				case ENET_EVENT_TYPE_DISCONNECT:
					printf("Disconnected.\n");
					client_on = false;
					break;
				}
			}
		}
	}

	int start(int id, const char* authKey)
	{
		client::id = id;
		client::authKey = authKey;
		
		if (enet_initialize() != 0)
		{
			printf("Failed to initialize ENet.\n");
			return 1;
		}

		atexit(enet_deinitialize);
		std::thread(client_thread).join();

		return 0;
	}
};
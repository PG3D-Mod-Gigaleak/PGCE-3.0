#pragma once

#include "enet.h"
#include "packet.h"
#include <cstdio>
#include <cstring>
#include <string>

#include "packets/register.h"

namespace packets
{
	struct handshake : packet
	{
		handshake()
		{
			this->id = 0x01;
			this->data = new char[2]{0x48, 0x49};
			this->size = 2;
		}

		handshake(ENetPacket* packet)
		{
			run((char*)packet->data);
		}

		void run(char* data)
		{
			if (conforms(data, 0x01)) {
				char* enc_key = new char[strlen(data)-1];
				for (size_t i = 1; i < strlen(data); i++) {
					enc_key[i-1] = data[i];
				}
				client::encryption_key = std::stoull(enc_key);
				delete[] enc_key;
				packets::pregister().send(client::peer);
			} else {
				printf("Malformed packet?\n");
			}
		}
	};
};
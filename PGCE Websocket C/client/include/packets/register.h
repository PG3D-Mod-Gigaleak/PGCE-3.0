#pragma once

#include "enet.h"
#include "packet.h"
#include <cstdio>
#include <cstring>
#include <crossguid/guid.hpp>

namespace packets
{
	struct pregister : packet
	{
		pregister()
		{
			this->id = 0x02;
			std::string guid = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"/*xg::newGuid().str()*/;
			int64_t plr_id = 1;
			std::string plr_id_str = std::to_string(plr_id);

			int a = 1 + guid.size() + 1 + plr_id_str.size();

			printf("%i\n", plr_id_str.size());
			
			this->data = new char[a] { 0x00 };
			
			this->data[0] = guid.size();
			strcat(this->data, guid.c_str());
			this->data[37] = plr_id_str.size();
			strcat(this->data, plr_id_str.c_str());

			this->size = a;
		}

		pregister(ENetPacket* packet)
		{
			run((char*)packet->data);
		}

		void run(char* data)
		{
			if (conforms(data, 0x02)) {
				char status_length = data[1];
				if (status_length == 13) {
					printf("Registration failed\n");
					return;
				} else if (status_length == 8) {
					printf("Registration successful\n");
					return;
				} else {
					printf("Registration failed\n");
				}
			} else {
				printf("Malformed packet?\n");
			}
		}
	};
};
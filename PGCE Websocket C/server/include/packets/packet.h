#pragma once

#include "enet.h"
namespace packets
{
	struct packet
	{
		char id;
		char* data;
		int size;

		ENetPacketFlag flag = ENET_PACKET_FLAG_RELIABLE;

		packet() = default;

		packet(char* data, int size)
		{
			this->data = data;
			this->size = size;
		}

		packet(ENetPacket* packet)
		{
			run((char*)packet->data);
		}

		bool conforms(char* data)
		{
			if (data[0] == id)
			{
				return true;
			}
			return false;
		}

		void send(ENetPeer* peer, bool ignore_header = false)
		{
			if (!ignore_header) {
				char* f_data = new char[size+2];
				f_data[0] = id;
				for (size_t i = 0; i < size; i++)
				{
					f_data[i+1] = data[i];
				}
				f_data[size+1] = 0x00;
				enet_peer_send(peer, 0, enet_packet_create(f_data, size+2, flag));
				
				delete[] f_data;
			} else {
				enet_peer_send(peer, 0, enet_packet_create(data, size, flag));
			}
		}

		void run(char* data)
		{
			
		}
	};
};
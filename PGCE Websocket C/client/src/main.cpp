#define ENET_IMPLEMENTATION
#include "client.h"

void login(int id, const char* authKey) {
	client::start(id, authKey);
}

int main(int argc, char *argv[])
{
	login(1, "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
}
#include <filesystem>

#define ENET_IMPLEMENTATION
#include "database.h"
#include "server.h"

int main(int argc, char *argv[])
{
	int open = database::open();
	if (open != SQLITE_OK)
	{
		printf("Failed to open database: %d\n", open);
		return 1;
	}

	if (!std::filesystem::exists("db.sqlite"))
	{
		database::setup();
	}

	server::start();
}
#include "database.h"
#include <cstdint>
#include <string>
namespace player
{
	struct player_data
	{
		bool valid = false;
		int64_t id;
		std::string name;
		std::string auth_key;
		bool banned;
	};
	void load(int64_t id, player_data& data)
	{
		if (!database::user_exists(id))
		{
			return;
		}
		data.valid = true;

		data.id = id;
		data.name = database::get_user_name(id);
		data.auth_key = database::get_user_hashed_authkey(id);
		data.banned = database::user_banned(id);
	}
};
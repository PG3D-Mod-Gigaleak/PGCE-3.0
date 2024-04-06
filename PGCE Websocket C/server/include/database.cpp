#include "database.h"

#include "hash/SHA384.h"
#include <cstdio>
#include <cstring>

namespace database
{
	sqlite3* db;

	void close()
	{
		sqlite3_close(db);
	}

	int open()
	{
		printf("Opening database...\n");
		atexit(close);
		return sqlite3_open("db.sqlite", &db);
	}

	int setup()
	{
		printf("Setting up database...\n");
		const char* cmd = "CREATE TABLE Users(id INTEGER PRIMARY KEY AUTOINCREMENT, name TEXT, skin TEXT NOT NULL DEFAULT \"\", authkey TEXT NOT NULL DEFAULT \"\", coins INTEGER NOT NULL DEFAULT 15, banned INTEGER NOT NULL DEFAULT 0, catears INTEGER NOT NULL DEFAULT 0, catequiplist TEXT NOT NULL DEFAULT \"\", achievements TEXT NOT NULL DEFAULT \"\", boughtWeapons TEXT NOT NULL DEFAULT \"\", isadmin INTEGER NOT NULL DEFAULT 0);";
		return sqlite3_exec(db, cmd, nullptr, nullptr, nullptr);
	}

	// USER FUNCTIONS BEGIN //

	bool is_auth_key_valid(int64_t& id, const std::string& authkey)
	{
		const char* cmd = "SELECT authkey FROM Users WHERE id = ?;";
		sqlite3_stmt* stmt;
		int result = sqlite3_prepare_v2(db, cmd, -1, &stmt, nullptr);
		if (result != SQLITE_OK)
		{
			return false;
		}
		sqlite3_bind_int(stmt, 1, id);
		result = sqlite3_step(stmt);
		if (result == SQLITE_ROW)
		{
			const char* it = (const char*)sqlite3_column_text(stmt, 0);
			if (it == nullptr)
			{
				return false;
			}
			std::string server_authkey = std::string(it);
			sqlite3_finalize(stmt);

			if (authkey.size() != server_authkey.size())
			{
				return false;
			}

			for (int i = 0; i < authkey.size(); i++)
			{
				if (authkey.at(i) != server_authkey.at(i))
				{
					return false;
				}
			}

			return true;
		}
		else
		{
			sqlite3_finalize(stmt);
			return false;
		}
	}

	bool user_exists(int64_t& id)
	{
		const char* cmd = "SELECT * FROM Users WHERE id = ?;";
		sqlite3_stmt* stmt;
		int result = sqlite3_prepare_v2(db, cmd, -1, &stmt, nullptr);
		if (result != SQLITE_OK)
		{
			return false;
		}
		sqlite3_bind_int64(stmt, 1, id);
		result = sqlite3_step(stmt);
		if (result == SQLITE_ROW)
		{
			sqlite3_finalize(stmt);
			return true;
		}
		else
		{
			return false;
		}
	}

	bool user_banned(int64_t& id)
	{
		const char* cmd = "SELECT banned FROM Users WHERE id = ?;";
		sqlite3_stmt* stmt;
		int result = sqlite3_prepare_v2(db, cmd, -1, &stmt, nullptr);
		if (result != SQLITE_OK)
		{
			return false;
		}
		sqlite3_bind_int64(stmt, 1, id);
		result = sqlite3_step(stmt);
		if (result == SQLITE_ROW)
		{
			bool column = sqlite3_column_int(stmt, 0) == 1;
			sqlite3_finalize(stmt);
			return column;
		}
		else
		{
			return false;
		}
	}

	std::string get_user_name(int64_t& id)
	{
		const char* cmd = "SELECT name FROM Users WHERE id = ?;";
		sqlite3_stmt* stmt;
		int result = sqlite3_prepare_v2(db, cmd, -1, &stmt, nullptr);
		if (result != SQLITE_OK)
		{
			return "";
		}
		sqlite3_bind_int64(stmt, 1, id);
		result = sqlite3_step(stmt);
		
		if (result == SQLITE_ROW)
		{
			std::string name = std::string((const char*)sqlite3_column_text(stmt, 0));
			sqlite3_finalize(stmt);
			return name;
		}
		else
		{
			return "";
		}
	}

	std::string get_user_hashed_authkey(int64_t& id)
	{
		const char* cmd = "SELECT authkey FROM Users WHERE id = ?;";
		sqlite3_stmt* stmt;
		int result = sqlite3_prepare_v2(db, cmd, -1, &stmt, nullptr);
		if (result != SQLITE_OK)
		{
			return "";
		}
		sqlite3_bind_int64(stmt, 1, id);
		result = sqlite3_step(stmt);
		if (result == SQLITE_ROW)
		{
			const char* it = (const char*)sqlite3_column_text(stmt, 0);
			if (it == nullptr)
			{
				return "";
			}
			std::string authkey = std::string(it);
			sqlite3_finalize(stmt);
			return authkey;
		}
		else
		{
			return "";
		}
	}

	// USER FUNCTIONS END //
}
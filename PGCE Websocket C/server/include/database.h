#pragma once

#include <cstdio>
#include <cstdlib>
#include <sqlite3.h>
#include <string>

namespace database
{
    void close();
    int open();
    int setup();

    bool is_auth_key_valid(int64_t& id, const std::string& authkey);
    bool user_exists(int64_t& id);
    bool user_banned(int64_t& id);
    std::string get_user_name(int64_t& id);
    std::string get_user_hashed_authkey(int64_t& id);
};
#include <cmath>
#include <cstdint>
#include <string>

namespace encryption
{
	std::string encrypt_decrypt(const std::string& data, const uint64_t& key)
	{
		std::string result;
		uint64_t key_edit = key;
		for (size_t i = 0; i < data.size(); i++)
		{
			result += data[i] ^ key_edit;
			key_edit ^= (uint64_t)std::pow(i, i % 3) + 1;
		}
		return result;
	}

	const char* encrypt_decrypt(const char* data, const uint64_t& key)
	{
		return encrypt_decrypt(std::string(data), key).c_str();
	}
};
cmake_minimum_required(VERSION 3.0.0)
project(ceserver VERSION 0.1.0 LANGUAGES C CXX)

add_executable(ceserver src/main.cpp 
	include/database.cpp
	include/hash/SHA384.cpp)

set_target_properties(ceserver
	PROPERTIES
		CXX_STANDARD 17
		CXX_STANDARD_REQUIRED YES
		CXX_EXTENSIONS NO
)

target_include_directories(ceserver PRIVATE
	include/
)

target_link_libraries(ceserver stdc++ sqlite3 enet)
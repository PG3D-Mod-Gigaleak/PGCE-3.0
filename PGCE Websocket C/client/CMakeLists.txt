cmake_minimum_required(VERSION 3.0.0)
project(ceclient VERSION 0.1.0 LANGUAGES C CXX)

add_executable(ceclient src/main.cpp)

set_target_properties(ceclient
	PROPERTIES
		CXX_STANDARD 17
		CXX_STANDARD_REQUIRED YES
		CXX_EXTENSIONS NO
)

target_include_directories(ceclient PRIVATE
	include/
)


target_link_libraries(ceclient stdc++ enet crossguid uuid)
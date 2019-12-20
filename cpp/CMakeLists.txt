cmake_minimum_required(VERSION 3.8)

enable_language(CXX)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(PROJ_NAME chronica)

add_executable(chronica
    src/main.cc
    include/character.h
    src/character.cc
    include/api.h
    include/lua_loader.hpp
    include/databaseManager.hpp
)

include_directories(
    include
    src
    include/lua
)

if(WIN32)
	link_directories(lib)
	target_link_libraries(chronica
		/Users/dynamonda/Source/Repos/chronica/cpp/lib/lua5.3.0-static.lib
		/Users/dynamonda/Source/Repos/chronica/cpp/lib/sqlite3.lib
		#/Users/dynamonda/Source/Repos/chronica/cpp/lib/sqlite3.dll
	)
else()
	target_link_libraries(chronica
		lib/liblua.a
		lib/libsqlite3.la
	)
endif()



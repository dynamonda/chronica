#ifndef _CHRONICA_INCLUDE_LUA_LOADER_HPP_
#define _CHRONICA_INCLUDE_LUA_LOADER_HPP_

extern "C"{
#include "./lua/lua.hpp"
#include "./lua/lauxlib.h"
#include "./lua/lualib.h"
}

class LuaLoader
{
public:
    LuaLoader()
    {
        L = luaL_newstate();
    };
    virtual ~LuaLoader()
    {
        lua_close(L);
    };

private:
    LuaLoader(const LuaLoader& lua_loader);
    LuaLoader& operator=(const LuaLoader& lua_loader);

    lua_State* L;
};

#endif 

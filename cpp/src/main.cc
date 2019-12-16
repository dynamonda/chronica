#include <iostream>
#include "character.h"
#include "api.h"
#include "lua_loader.hpp"

int main(int argc, char* argv[]){
    std::cout << "Hello World\n";
    
    std::unique_ptr<API> api_ = std::make_unique<API>();
    std::unique_ptr<LuaLoader> lua_ = std::make_unique<LuaLoader>();

    return 0;
}
#include <iostream>
#include "character.h"
#include "api.h"
#include "lua_loader.hpp"
#include "databaseManager.hpp"

int main(int argc, char* argv[]){
    std::cout << "Hello World\n";
    
    std::unique_ptr<API> api_ = std::make_unique<API>();
    std::unique_ptr<LuaLoader> lua_ = std::make_unique<LuaLoader>();
    std::unique_ptr<DatabaseManager> dbm = std::make_unique<DatabaseManager>();
    
    return 0;
}
#ifndef _CHRONICA_CPP_INCLUDE_DATABASEMANAGER_HPP_
#define _CHRONICA_CPP_INCLUDE_DATABASEMANAGER_HPP_

#include "./sqlite/sqlite-src-3300100/sqlite3.h"
#include <iostream>

const char* const dbname_ = "../../db.sqlite3";
sqlite3 *pdb = nullptr;

class DatabaseManager{
public:
    DatabaseManager()
    {
        int err = sqlite3_open(dbname_, &pdb);
        if(err){
            printf("OPEN ERROR\n");
        }
        printf("OPEN SUCCESS\n");
    }
};

#endif
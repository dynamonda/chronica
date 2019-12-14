#ifndef _INCLUDE_API_H_
#define _INCLUDE_API_H_

#include <vector>
#include <memory>
#include "character.h"

class API
{
public:
    API(){};
    ~API(){};

private:
    API(const API &api);
    API &operator=(const API &api);   

    std::unique_ptr<std::vector<Character>> character_vec_;
};

#endif
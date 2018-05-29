#ifndef _INCLUDE_CHARACTER_H_
#define _INCLUDE_CHARACTER_H_

#include <string>

enum class Gender{
    Male,
    Female
};

class Character{
public:
    Character();
    
private:
    std::string name_;
    Gender gender_;
};

#endif
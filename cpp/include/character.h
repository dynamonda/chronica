#ifndef _INCLUDE_CHARACTER_H_
#define _INCLUDE_CHARACTER_H_

enum class Gender{
    Male,
    Female
};

class Character{
public:
    Character();
    
private:
    Gender gender_;
};

#endif
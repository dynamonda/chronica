#include "character.h"

Character::Character(){
    name_ = std::make_unique<std::string>("");
    gender_ = Gender::Male;
}
#include <iostream>
#include "character.h"
#include "api.h"

int main(int argc, char* argv[]){
    std::cout << "Hello World\n";
    
    std::unique_ptr<API> api_ = std::make_unique<API>();
     
    return 0;
}
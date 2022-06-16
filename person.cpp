#include <iostream>
#include "person.h"

void Person::Notify(std::string text) {
    std::cout<<_name<<", you "<<text<<std::endl;
}

std::string Person::Get_Name() {
    return _name;
}

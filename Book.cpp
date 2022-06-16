#include <iostream>
#include "Book.h"

void Book::Show_Info() const{
    std::cout<<"Name: "<<_name<<std::endl;
    std::cout<<"Genre: "<<_genre<<std::endl;
}

std::string Book::Get_Name() {
    return _name;
}

std::string Book::Get_Genre() {
    return _genre;
}

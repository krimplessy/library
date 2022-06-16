#include <iostream>
#include "LibraryCard.h"

void LibraryCard::Add_Book(Book *book) {
    books.add(book);
}

void LibraryCard::Return_Book(std::string name) {
    for(auto it: books){
        if(it->Get_Name() == name)
            books.remove(it);
    }
}

void LibraryCard::Show_Info() {
    std::cout<<"This card belongs to "<<*person<<std::endl;
    std::for_each(std::begin(books), std::end(books),
    [](auto book){
       book->Show_Info();
    }
    );
}

bool LibraryCard::Find_Book(std::string name) {
    for(auto it: books){
        if(it->Get_Name() == name)
            return true;
    }
    return false;
}

void LibraryCard::Notify(std::string text) {
    person->Notify(text);
}

std::string LibraryCard::Get_Owners_Name() {
    return person->Get_Name();
}



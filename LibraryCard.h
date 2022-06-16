#ifndef LIBRARY_LIBRARYCARD_H
#define LIBRARY_LIBRARYCARD_H

#include "person.h"
#include "Book.h"
#include "vector.h"

class LibraryCard {
    Person* person;
    Vector<Book* > books;
public:
    LibraryCard():person(nullptr){}
    LibraryCard(std::string name):person(new Person(name)){};
    void Add_Book(Book* book);
    void Return_Book(std::string name);
    bool Find_Book(std::string name);
    void Show_Info();
    void Notify(std::string text);
    std::string Get_Owners_Name();
};


#endif //LIBRARY_LIBRARYCARD_H

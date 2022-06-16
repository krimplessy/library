#ifndef LIBRARY_LIBRARYCARDSYSTEM_H
#define LIBRARY_LIBRARYCARDSYSTEM_H

#include "LibraryCard.h"
#include <map>
using std::map;
class LibrarySystem {
    Vector<LibraryCard* > cards;
    map<Book*, bool> books;
    Book* Find_Book_Helper(std::string book);
public:
    LibrarySystem() = default;
    void Add_New_Member(std::string name);
    void Remove_Member(std::string name);
    void Notify();
    void Take_Book(std::string person, std::string book);
    void Return_Book(std::string person, std::string book);
    void Set_Book_Collection(map<Book*, bool> book_collection);
    bool Find_Book(std::string name);
    void Show();
};


#endif //LIBRARY_LIBRARYCARDSYSTEM_H

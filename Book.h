#ifndef LIBRARY_BOOK_H
#define LIBRARY_BOOK_H

#include <string>
class Book {
    std::string _name;
    std::string _genre;
public:
    Book():_name("Little Mermaid"), _genre("Fairy tale"){}
    Book(std::string name, std::string genre):_name(name), _genre(genre){}
    void Show_Info() const;
    std::string Get_Name();
    std::string Get_Genre();
};


#endif //LIBRARY_BOOK_H

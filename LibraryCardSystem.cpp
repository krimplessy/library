#include "LibraryCardSystem.h"

void LibrarySystem::Add_New_Member(std::string name) {
    cards.add(new LibraryCard(name));
}

void LibrarySystem::Remove_Member(std::string name) {
    for(auto card: cards){
        if(card->Get_Owners_Name() == name)
            cards.remove(card);
    }
}

void LibrarySystem::Notify() {
    for(auto book: books)
        if(!book.second)
            for(auto card: cards)
                if(card->Find_Book(book.first->Get_Name()))
                    card->Notify("need to return book");
}

void LibrarySystem::Take_Book(std::string person, std::string book) {
    auto find_card_and_add_book = [this](std::string name, Book* book){
         for(auto card: cards){
             if(card->Get_Owners_Name() == name){
                 card->Add_Book(book);
                 books[book] = false;
                 break;
             }
         }
    };

    if(Find_Book(book))
        find_card_and_add_book(person, Find_Book_Helper(book));
}

void LibrarySystem::Return_Book(std::string person, std::string book) {
    auto find_card_and_remove_book = [this](std::string name, Book* book){
        for(auto card: cards){
            if(card->Get_Owners_Name() == name){
                card->Return_Book(book->Get_Name());
                books[book] = true;
                break;
            }
        }
    };

    auto fbook = Find_Book_Helper(book);
    if(fbook != nullptr && !books[fbook])
        find_card_and_remove_book(person, fbook);
}

void LibrarySystem::Set_Book_Collection(map<Book *, bool> book_collection) {
    books = book_collection;
}

Book *LibrarySystem::Find_Book_Helper(std::string book) {
    auto find_book = [this](std::string name){
        auto book = new Book();
        book = nullptr;
        for(auto book_it: books){
            if(book_it.first->Get_Name() == name)
                book = book_it.first;
        }
        return book;
    };
    return find_book(book);
}

bool LibrarySystem::Find_Book(std::string name) {
    auto book = Find_Book_Helper(name);
    return book != nullptr && books[book];
}

void LibrarySystem::Show() {
    for(auto card: cards){
        card->Show_Info();
    }
    std::cout<<std::endl;
    for(auto book: books) {
        book.first->Show_Info();
        std::cout<<"Status:"<< ((book.second)? "Not taken": "Taken")<<std::endl;
    }
}

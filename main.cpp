#include "LibraryCardSystem.h"
int main() {
    LibrarySystem ls;
    map<Book*, bool> ms;
    ms[new Book("Little Mermaid", "Fairy tail")] = true;
    ms[new Book("How to program in C++", "Science")] = true;
    ms[new Book("Romeo and Juliet", "Romance")] = true;
    ls.Set_Book_Collection(ms);
    ls.Add_New_Member("Danil");
    ls.Add_New_Member("Maxim");
    ls.Add_New_Member("Maria");
    ls.Show();
    ls.Take_Book("Danil", "Little Mermaid");
    ls.Take_Book("Maxim", "Romeo and Juliet");
    ls.Take_Book("Maxim", "How to program in C++");
    ls.Show();
    ls.Notify();
    ls.Return_Book("Maxim", "How to program in C++");
    ls.Remove_Member("Maria");
    ls.Show();
    return 0;
}

#ifndef LIBRARY_PERSON_H
#define LIBRARY_PERSON_H

#include <string>
using std::ostream;
class Person {
    std::string _name;
public:
    Person():_name("Kristina"){}
    Person(std::string name):_name(name){}
    void Notify(std::string text);
    std::string Get_Name();
    friend ostream& operator<<(ostream& os, const Person& person){
        os<<person._name;
        return os;
    }
};


#endif //LIBRARY_PERSON_H

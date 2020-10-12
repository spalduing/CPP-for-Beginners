#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;
class Person
{
    private:
        string name = " ";
    public:
        Person();
        ~Person();
        string toString();
        string getName();
        void setName(string new_name);
};

#endif // PERSON_H

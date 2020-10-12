#ifndef PERSON_H
#define PERSON_H
using namespace std;


class Person
{
    private:
        string name;
        int age;
    public:
        Person();
        Person(string new_name){
            name = new_name;
            age = 0;
        };
        Person(string new_name, int new_age){
            name = new_name;
            age = new_age;
        };
        string toString();
        string getName();
        void setName(string new_name);

};

#endif // PERSON_H

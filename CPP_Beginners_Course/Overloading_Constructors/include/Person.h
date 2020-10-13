#ifndef PERSON_H
#define PERSON_H
using namespace std;


class Person
{
    private:
        string name;
        string clas;
        int age;
    public:
        Person();
        Person(string new_name){
            name = new_name;
            age = 0;
            clas = "undefined";
        };
        Person(string new_name, int new_age){
            name = new_name;
            age = new_age;
            clas = "undefined";
        };

        Person(string name, string clas, int age){
            this->name = name;
            this->clas = clas;
            this->age = age;
        }
        string toString();
        string getName();
        void setName(string new_name);

};

#endif // PERSON_H

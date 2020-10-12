#include <iostream>
#include <sstream>
#include "Person.h"
using namespace std;
Person::Person()
{
    name = "Lupus Regina Beta";
    age = 57;
}

string Person::toString()
{
    stringstream ss;
    ss<<"Her name is: "<<name;
    ss<<"; Her age is: "<< age;
    string msg = ss.str();
    return msg;
}

string Person::getName()
{
    return name;
}

void Person::setName(string new_name)
{
    name = new_name;
}

#include "Person.h"

Person::Person()
{
    name = "George";
}

Person::~Person()
{
    //dtor
}

string Person::toString()
{
    return "Person name is: " + name;
}

string Person::getName()
{
    return name;
}

void Person::setName(string new_name)
{
    name = new_name;
}

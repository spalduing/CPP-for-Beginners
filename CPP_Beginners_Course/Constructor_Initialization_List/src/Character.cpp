#include <iostream>
#include <sstream>
#include "Character.h"
using namespace std;
Character::Character(): name("Lupusregina Beta"), clas("Priest"), age(57)
{

}

Character::Character(string name, string clas, int age): name(name), clas(clas), age(age)
{

}

Character::~Character()
{
    //dtor
}

string Character::toString()
{
    string msg = " ";
    stringstream ss;
    ss << "Her name is: "<<name;
    ss << "; Her class is: "<<clas;
    ss << "; Her age is: "<<age;
    msg = ss.str();
    return msg;
}

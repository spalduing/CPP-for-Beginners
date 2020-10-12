#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string name = "Bob";
    string info;
    int age = 32;

    // if you run the commented code bellow,
    // you'l get an error, bcause you cannot
    // concatenate an int with a string.
    //info = "Name: " + name + "; age: " + age;
    //cout << info << endl;

    //Instead you may wanna do this thing bellow.
    stringstream ss;
    ss << "Name is: ";
    ss << name;
    ss << "; Age is: ";
    ss << age;
    info = ss.str();
    cout << info << endl;

    return 0;
}

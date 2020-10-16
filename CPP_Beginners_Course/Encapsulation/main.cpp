#include <iostream>

using namespace std;

/*
*   The hole concept of encapsulating in your
*   class have the purpose of hiding variables
*   and methods that you don't want the final
*   user get's acces
*/

class Frog
{
private:
    string name;

private:
    string getName(){return name;}
public:
    Frog(string name):name(name){}

    //Here you can easily give the user access
    //to the getName() method directly, but
    //instead (for whatever reason) you decide
    //to hide that method from the user and just
    //give him that info through a different method.

    void info(){cout<<"My name is: "<<getName()<<endl;}
};
int main()
{
    Frog frog("Freddy");
    frog.info();

    return 0;
}

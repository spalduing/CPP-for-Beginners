#include <iostream>
#include "Cat.h"
using namespace std;

int main()
{
    Cat jim;
    Cat bob;
    //jim.happy = false;
    jim.makeSad();
    cout << "Jim says: " << flush;
    jim.speak();

    bob.makeHappy();
    cout << "Bob says: "<< flush;
    bob.speak();
    return 0;
}

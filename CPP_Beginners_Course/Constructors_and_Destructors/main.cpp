#include <iostream>
#include "Cat.h"
using namespace std;

int main()
{
    cout << "Starting program ..." << endl;
    {
    //You can use the curly brackets to
    //deallocate memory at specific point
    //of the program.
        Cat cat;
        cat.speak();
    }
    cout << "Ending program ..." << endl;

    return 0;
}

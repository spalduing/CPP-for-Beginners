#include <iostream>

using namespace std;

int main()
{
    int value = 4;
    int number = 4; // you can't use variables
    const int num = 4; // but you can use constants

    switch(value){
    case num:
        cout << "Value is 4." << endl;
        break;
    case 5:
        cout << "Value is 5." << endl;
        break;
    case 6:
        cout << "Value is 6." << endl;
        break;
    default:
        cout << "Unrecognized value." << endl;
    }

    return 0;
}

#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int value = 32535;

    cout << "This is a int value:"<< value << endl;

    // cout << INT_MAX << endl;  NOT WORKING!
    // cout << INT_MIN << endl;  NOT WORKING!

    long int lValue =  342342555647;
    cout << "This is a long int value:"<< lValue << endl;

    short int sValue = 3234;

    cout << "This is a short int value:"<< sValue << endl;

    cout << endl;

    cout << "This is the size of an int: " << sizeof(int) << " bytes" << endl;
    cout << "This is the size of a short int: " << sizeof(short int) << " bytes" << endl;
    cout << "This is the size of a long int: " << sizeof(long int) << " bytes" << endl;

    unsigned int uValue = 4;

    cout << endl << "This is a unsingned int: " <<uValue << endl;

    return 0;
}

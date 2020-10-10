#include <iostream>

using namespace std;

int main()
{
    int values[3];

    cout << "Array of integers" << endl;
    cout << "=================" << endl;
    values[0] = 88;
    values[1] = 12;
    values[2] = 33;

    cout << values[0] << endl;
    cout << values[1] << endl;
    cout << values[2] << endl;

    cout << endl << "Array of doubles" << endl;
    cout << "=================" << endl;

    double numbers[4] = {4.5, 2.3, 7.2, 8.1};

    for(int i=0; i<4; i++){
        cout <<"Element at index " << i << ": " << numbers[i] << endl;
    }

    cout << endl << "Initializing with zero values" << endl;
    cout << "=================" << endl;

    int zeros[10] = {};

    for(int i=0; i<10; i++){
        cout <<"Element at index " << i << ": " << zeros[i] << endl;
    }

    return 0;
}

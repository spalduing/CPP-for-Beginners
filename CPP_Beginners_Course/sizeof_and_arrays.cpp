#include <iostream>

using namespace std;

int main()
{
    //Declaring an array of four elements.
    int values[] = {4, 7, 3, 4};

    // You can obtain the size in bytes of an array,
    // this size will be the space in memory of an int
    // number multiplied by the total number of elements
    // in the array.
    cout << "The size of the array is: " << sizeof(values) << endl;
    // The size of an int is 4 byes
    cout << "The size of an integer is: " << sizeof(int) << endl;
    // So if you divide the size of the array by
    // the size of an int number in c++, you'll get
    // the exact number of element of the array
    int s = sizeof(values)/sizeof(int);
    for(int i=0; i<s; i++){
        cout << values[i] << " " << flush;
    }

    return 0;
}

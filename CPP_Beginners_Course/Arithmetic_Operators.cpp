#include <iostream>
using namespace std;
/*
* +
* -
* /
* +=
* -=
* /=
* *=
* %
* %=
* precedence
*/
int main()
{
    //casting the 7 number into a double to
    //get a proper double division.
    double value = (double) 7/2;
    cout << value << endl;

    //Now we're doing the contrary
    //We're casting a double into an int.
    int value1 = (int)7.3;
    cout << value1 << endl;

    int value2 = 8;
    //This's the same as doing
    value2 += 1;  //value2 = value2; + 1 or value2++;
    cout << value2 << endl;

    int value3 = 10;
    value3 /= 5; // value3 = value3 / 5;
    cout << value3 << endl;

    int value4 = 13%5;
    cout << value4 << endl;

    double equation = (5.3/4)+(2*6); //5.3/4+2*6
    cout << equation << endl;
    return 0;
}

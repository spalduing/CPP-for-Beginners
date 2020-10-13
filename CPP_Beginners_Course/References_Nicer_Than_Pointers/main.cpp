#include <iostream>

using namespace std;

void changeSomething(double &value)
{
    value = 123.4;
}
int main()
{
    int value1 = 8;
    //if you assign value1 to value2 by value
    //the compiler just make a copy of value1 then
    //it assign it to value2
    int value2 = value1;

    //But if you do it by reference
    //the compiler will make value3 a
    //reference to value1, so change value3
    //means change value1 too.
    int &value3 = value1;

    value3 = 10;

    cout<<"value1=8; now ->: " << value1 << endl;
    cout<<"value2=value1; now->: " << value2 << endl;
    cout<<"&value3=value1; then value3=10; now->: " << value3 << endl;

    double value = 4.321;
    changeSomething(value);
    cout<<value<<endl;

    return 0;
}

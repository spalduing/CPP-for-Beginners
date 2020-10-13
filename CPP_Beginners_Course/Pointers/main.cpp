#include <iostream>

using namespace std;

void manipulate(double value)
{
    cout << "2. Value double in manipulate: "<< value<< endl;
    value = 10.3;
    cout << "3. Value double in manipulate: "<< value << endl;
}

/*
* Here we're overloading this function, this is
a previus concept we learned in the
Overloading_Constructor project.
* The hole concept of overloading a method consist
on changing of clone a method with one or more changes
in his parameters, this allow us to have a dynamic method
that behaves different according to the parameters that you
pass  to it.
*So in this case we wanna overload this method
in order to explain how to pointers really works,
if you pass a variable to the method by reference,
his common behavior will change and now it do not will
create a copy of the parameter pass him but instead it will use
the exact  variable that you pass him.
*/
void manipulate(double *value)
{
    cout << "2. Value double in manipulate: "<< *value<< endl;
    *value = 10.3;
    cout << "3. Value double in manipulate: "<< *value << endl;
}

int main()
{
    int nValue = 8;

    int* pnValue = &nValue;

    cout << "Int value: " << nValue<<endl;
    cout << "Pointer to  nvalue: " << pnValue<<endl;
    cout << "Int value via pointer: " << *pnValue<<endl;
    cout << endl << endl;
    cout << "   Passing dValue by Value"<< endl;
    cout << "=================================="<<endl;
    double dValue = 123.5;

    cout << "1. dValue: " << dValue<< endl;
    manipulate(dValue);
    cout <<"4. dValue: " << dValue<< endl;

    cout << endl << endl;
    cout << "   Passing dValue by Reference"<< endl;
    cout << "==================================="<<endl;

    cout << "1. dValue: " << dValue<< endl;
    manipulate(&dValue);
    cout <<"4. dValue: " << dValue<< endl;

    return 0;
}

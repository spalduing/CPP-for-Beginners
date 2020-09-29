#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float fValue = 123.456;
    double dValue = 123.456;

    cout << "The size of a float is: " << sizeof(float) << endl;
    cout << "The float number in fixed notation is: " << fixed << fValue << endl;
    //cout << "The float number in scientific notation is: " << scientific << fValue << endl;

    cout << endl << endl;

    cout << "The double number with setprecision is: " << setprecision(20) << fixed << dValue << endl;
    cout << "The float number with setprecision is: " << setprecision(20) << fixed << fValue << endl;

    return 0;
}

#include <iostream>
#include "Person.h"
using namespace std;

int main()
{
    Person regina;
    Person juri("Jury Alpha", 54);
    Person solution("Solution Epsilon");

    cout << regina.toString() << endl;
    cout << juri.toString() << endl;
    cout << solution.toString() << endl;
    return 0;
}

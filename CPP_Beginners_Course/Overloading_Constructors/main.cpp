#include <iostream>
#include "Person.h"
using namespace std;

int main()
{
    Person regina;
    Person juri("Jury Alpha", 54);
    Person solution("Solution Epsilon");
    Person narbel("Narberal Omega", "Archimage", 27);

    cout << regina.toString() << endl;
    cout << juri.toString() << endl;
    cout << narbel.toString() << endl;
    cout << solution.toString() << endl;
    return 0;
}

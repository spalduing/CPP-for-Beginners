#include <iostream>
#include "Character.h"
using namespace std;

int main()
{
    Character entoma("Entoma Vasilissa Zeta", "Warrior", 45);

    cout << entoma.toString() << endl;
    return 0;
}

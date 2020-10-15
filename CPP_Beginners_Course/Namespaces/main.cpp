#include <iostream>
#include "Cat.h"
#include "Animals.h"
using namespace std;

using namespace spalduing;

int main()
{
    Cat cat;
    cat.speak();

    spalduing::Cat cat1;
    cat.speak();

    cats::Cat cat2;
    cat2.speak();

    cout<<spalduing::CATNAME<<endl;
    cout<<cats::CATNAME<<endl;
    return 0;
}

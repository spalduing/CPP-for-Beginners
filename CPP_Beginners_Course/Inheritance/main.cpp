#include <iostream>

using namespace std;

/*
    HERE ANIMAL IS THE SUPER CLASS
*/
class Animal
{
private:

public:
    Animal(){cout<<"Constructor called"<<endl;}
    ~Animal(){cout<<"Destructor called"<<endl;}
    void speak(){cout<<"Grr!"<<endl;}
};

/*
    HERE CAT IS THE CLASS THAT INHERIT THE
    BEHAVIOUR AND METHOD OF THE SUPERCLASS ANIMAL
*/
class Cat: public Animal
{
public:
    void jump(){cout<<"Cat jumping"<<endl;}
};

int main()
{
    Animal animal;
    animal.speak();

    cout<<endl<<endl;
    Cat cat;
    cat.speak();
    cat.jump();


    return 0;
}

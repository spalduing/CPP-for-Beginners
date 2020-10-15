#include <iostream>

using namespace std;

class Animal{
private:
    string name;
public:
    Animal(){cout << "Animal created" << endl;}
    Animal(const Animal& other):name(other.name){cout << "Animal created by copying." <<endl;}
    ~Animal(){cout<<"Destructor called"<<endl;}
    void setName(string name){this->name=name;}
    void speak() const{cout << "My name is: " << name << endl;}
};

/*
* This is the traditional way of returning an obj from
* a function.
Animal createAnimal()
{
    Animal a;
    a.setName("Bertie");
    return a;
{
*/

/*
*In this way optimized way of creating a function that
*returns an object, that's it because even you still creating
*a copy as same as the traditional example, you're only
*copying 8 bytes that represents the direction where that
*object is allocated, so even if the object is huge and
*occupies a lot of memory, you're only copying 8 byes of memory.
*/
Animal* createAnimal()
{
    Animal *pAnimal = new Animal();
    pAnimal->setName("Bertie");
    return pAnimal;
}

int main()
{
    Animal* pFrog = createAnimal();

    pFrog->speak();

    //You must remember that unlike a traditional instancing
    //of an object (Animal a;), when you allocate memmory (make an instance)
    //of an object by creating a pointer you must delete it manually.
    delete pFrog;

    return 0;
}

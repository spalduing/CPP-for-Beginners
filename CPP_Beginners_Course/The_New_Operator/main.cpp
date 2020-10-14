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

int main()
{
    Animal *pCat1 = new Animal();

    //Calling class methof using -> keyword
    pCat1->setName("Sombra");

    //Special syntax for call a class method.
    (*pCat1).speak();

    /*
    * When you allocate memory using the *new* keyword
    * you must to deallocate that memory manually,
    * because c++ won't will do it for you.
    */
    delete pCat1;

    cout << sizeof(pCat1) << endl;

    //Pointer that points to no where.
    Animal *pCat2 = NULL;

    return 0;
}

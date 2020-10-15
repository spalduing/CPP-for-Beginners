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
    //allocating memory and instancing an int in that memory.
    int *pInt = new int;
    *pInt = 8;
    cout << *pInt << endl;
    delete pInt;

    // You can allocate then instancing an array too.
    Animal *pAnimal = new Animal[10];

    pAnimal[5].setName("George");
    pAnimal[5].speak();

    // But you must remember to put [] in front of the pointer
    //when you're gonna deallocate that array.
    delete [] pAnimal;

    char *pMem = new char[1000];
    delete [] pMem;

    /*
    WHITH SOME IMAGINATION YOU CAN USE THE CODE BELLOW
    TO CREATE A LIST THAT ENUMERATE EVERY ELEMENT WITH
    A LETTER OF THE ALPHABET.
    */
    char c = 'a';
    c++;
    string name(5,c);
    cout<<name<<endl;

    return 0;
}

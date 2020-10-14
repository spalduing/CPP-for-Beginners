#include <iostream>

using namespace std;

class Animal{
private:
    string name;
public:
    Animal(){cout << "Animal created" << endl;}
    Animal(const Animal& other):name(other.name){
        cout << "Animal created by copying." <<endl;
        //You're allow to call this method because the reference
        // to the object in the parameter is constant and the
        // method speak() is also constant.
        other.speak();
        }
    void setName(string name){this->name=name;}
    void speak() const{cout << "My name is: " << name << endl;}
};

int main()
{
    Animal animal;
    animal.setName("Freddy");

    Animal animal2 = animal;

    animal2.setName("Bob");

    animal.speak();
    animal2.speak();

    Animal animal3(animal);


    return 0;
}

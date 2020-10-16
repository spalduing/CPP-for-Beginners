#include <iostream>

using namespace std;

/*
*   Constructors and variables can't been inherited
*   by the child classes.
*/
class Machine{
private:
    int id;
public:
    Machine(): id(0){cout<<"Machine no arguments constructor called."<<endl;}
    Machine(int id): id(id){cout<<"Machine parameterized constructor called."<<endl;}
    void info(){cout <<"ID: "<<id<<endl;}
};

/*
*   So in order to get access to a super class
*   constructor like the Machine parameterized
*   constructor, you have to call that constructor
*   in your child class and pass him the values
*   he needs to initialize the parameter of the parent
*   class.
*/
class Vehicle: public Machine
{
private:

public:
    Vehicle(){cout<<"Vehicle no arguments constructor called."<<endl;}
    Vehicle(int id): Machine(id){cout<<"Vehicle parameterized constructor called."<<endl;}
};

/*
*   You only can make calls to the constructors
*   of the direct parent class of your child class.
*   For example, you cannot call the Machine(id)
*   constructor if you are in the Vehicle class
*   you must call the Vehicle(id) constructor instead.
*/
class Car: public Vehicle
{
private:

public:
    Car(){cout<<"Car no arguments constructor called"<<endl;}
    Car(int id): Vehicle(id){cout<<"Car parameterized constructor called"<<endl;}
};
int main()
{
    Machine machine(1);
    machine.info();

    Vehicle vehicle(123);
    vehicle.info();

    Car car(12);
    car.info();
    return 0;
}

#include <iostream>

using namespace std;

class Animal{
private:
    string name;
public:
    void setName(string name){this->name = name;}

    /*
    * Making a const method prevents you can change
    * any variable within the method's body.
    */
    void speak()const{cout << "My name is: "<<name << endl;}
};

int main()
{
    // this is an int that's const
    const int PI = 3.141592;

    Animal animal;
    animal.setName("Freddy");
    animal.speak();

    int value = 8;
    value = 9;
    /*
    * You can either make a pointer to a constant int
    * or make a constant pointer to an int and of course,
    * you can make a constant pointer that points
    * to a constant int
    */
    /*const*/ int * /*const*/ pValue = &value;
    cout << *pValue << endl;

    cout<<" First example: Pointer to a constant int"<<endl;
    cout<<"================================================"<<endl;
    int value1 = 7;
    const int *pValue1 = &value1;

    /*
    * You got an error if you try to change
    * the int that *pValue1 is currently pointing.
    */
    //*pValue1 = 12;

    /*
    * But you can change the direction that
    * pValue1 is currently pointing.
    */
    pValue1 = &value;

    cout<< *pValue1 << endl;


    cout<<" Second example: Constant pointer to an int"<<endl;
    cout<<"================================================"<<endl;
    int value2 = 6;
    int  * const pValue2 = &value2;

    /*
    * You got an error if you try to change
    * the direction that pValue2 is currently pointing.
    */
    //pValue2 = &value;

    /*
    * But you can change the int value of the
    * direction that pValue2 is currently pointing
    */
    *pValue2 = 12;


    cout<< *pValue2 << endl;

    cout<<" Third example: Constant pointer pointing to an constant int"<<endl;
    cout<<"================================================================"<<endl;
    int value3 = 6;
    const int  * const pValue3 = &value3;

    /*
    * You got error in both bellow because now
    * The pointer is constant and points to a
    * constant int.
    */
    //pValue2 = &value;
    //*pValue3 = 12;

    cout<< *pValue3 << endl;

    return 0;
}

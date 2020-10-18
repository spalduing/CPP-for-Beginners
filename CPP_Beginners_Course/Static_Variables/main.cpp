#include <iostream>

using namespace std;

// .h header file
class Test
{
private:
    //static int count;
    int id;
public:
    static int count;

    //Initialization of const must be done right here!
    static int const MAX = 99;

    Test(){
        count++;
        id = count;
    }

    int getId(){return id;}
    void setId(int id){this->id = id;}
    static void showInfo()
    {
        cout << count << endl;
    }
};

//.cpp source
int Test::count = 0;


int main()
{
    Test test1;
    cout<<"test1's id: "<<test1.getId()<<endl;

    Test test2;
    cout<<"test2's id: "<<test2.getId()<<endl;

    /*
    *   We don't need an object to access to count
    *   because it's static, it's associated with the class and not
    *   with a particular object.
    */
    cout <<"Total of instances created (by  static variable): " << Test::count << endl;

    /*
    *   We don't need an object to access to showInfo()
    *   because it's static, it's associated with the class and not
    *   with a particular object.
    */
    cout <<"Total of instances created (by  static method): ";
    Test::showInfo();


    cout << Test::MAX << endl;




    return 0;
}

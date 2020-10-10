#include <iostream>

using namespace std;

int main()
{
    string input;
    const string password = "hello";

    do{
        cout << "Enter your password: ";
        cin >> input;

        if(input != password){
            cout <<"Access denied." << endl << endl;
        }
    }while(input != password);

    cout << "Password accepted." << endl;
    return 0;
}

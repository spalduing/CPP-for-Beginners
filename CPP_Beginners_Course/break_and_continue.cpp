#include <iostream>

using namespace std;

int main()
{
    cout << "This is the 'break' sequence: " << endl << endl;
    for(int i=0; i<5; i++){
        cout << "i is: " << i << "  ";

        if( i == 3){
            cout << "Breaking ..."<< endl;
            break;
        }
        cout << "Looping ..." << endl;
    }
    cout << endl << "Break sequence ended ..." << endl;



    cout << endl << "This is the 'continue' sequence: " << endl << endl;
    for(int i=0; i<5; i++){
        cout << "i is: " << i << "  ";

        if( i == 3){
            cout << "Continuing ..."<< endl;
            continue;
        }
        cout << "Looping ..." << endl;
    }
    cout << endl << "Continue  sequence ended ..." << endl;
    return 0;
}

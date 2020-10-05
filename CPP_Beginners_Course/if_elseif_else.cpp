#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    /*
    cout << "1.\tAdd new record." << endl;
    cout << "2.\tDelete record." << endl;
    cout << "3.\tView record." << endl;
    cout << "4.\tSearch record." << endl;
    cout << "5.\tQuit." << endl << endl;

    cout << "Enter your selection: ";

    int value = 0;
    cin >> value;

    if(value == 1){
        cout << "Adding record..." << endl;
    }else if(value == 2){
        cout << "Deleting record..." << endl;
    }else if(value == 3){
        cout << "Viewing record..." << endl;
    }else if(value == 4){
        cout << "Searching record..." << endl;
    }else{
        cout << "Quiting..." << endl;
    }
    */

    float fvalue = 4.6;

    // As you can see the fvalue does not store the exact 4.6 number but instead an approximation of it.
    cout<< fixed << setprecision(10) << fvalue << endl;
    if(fvalue == 4.6){
        cout << "Equal." << endl;
    }else{
        cout << "NOT equal" << endl;
    }
    return 0;
}

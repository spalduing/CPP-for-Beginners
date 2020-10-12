#include <iostream>

using namespace std;

void showMenu()
{
    cout << "1. Search record." << endl;
    cout << "2. View record." << endl;
    cout << "3. Quit." << endl;
}


int getInput()
{
    cout << endl << endl << "Enter selection: ";

    int input;
    cin >> input;


    return input;
}
int processSelection(int selection)
{
    switch(selection){
        case 1:
            cout << "Searching for the record ..." << endl;
            break;
        case 2:
            cout << "Viewing record ..." << endl;
            break;
        case 3:
            cout << "Quitting ..." << endl;
            break;
        default:
            cout << "Please enter a valid selection." << endl << endl;
            return -1;
    }
    return 0;
}
int main()
{
    int selection, response  = 0;

    showMenu();

    do{
        selection = getInput();

        // passing the input variable as parameter of the
        //processSelection function.
        response = processSelection(selection);
    }while(response == -1);

    return 0;
}

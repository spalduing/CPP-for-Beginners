#include <iostream>

using namespace std;

// Displays the menu of the program.
void showMenu()
{
    cout << "1. Search record." << endl;
    cout << "2. View record." << endl;
    cout << "3. Quit." << endl;
}

// Prints out a different message for every selected option.
// If the user enters an invalid selection, prints out a message
// asking him to enter a valid selection.
int processSelection()
{
    cout << "Enter selection: ";

    int input;
    cin >> input;

    switch(input){
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
        return processSelection();
    }
    return 0;
}
int main()
{
    // call to the showMenu method
    showMenu();
    //call to the processSelection method
    processSelection();


    return 0;
}

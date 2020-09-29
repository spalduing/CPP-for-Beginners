#include <iostream>

using namespace std;

int main()
{
    bool bVal = false;

    char cValue =  '1';
    char cValue2 = 49;

    wchar_t cValue3 = 'i'; // the wchar_t fullfils the same pourpose that casting a char varaible who's value is a number.
                            // it basicaly gives the position/number of the caracter asingned in the ascii table.
    cout << "The boolean value is: " << bVal << endl;
    cout << "The size of a char is: "<< sizeof(char) << " bytes." << endl;
    cout << "The number of the character 1 in the ascii table is: " << (int)cValue << endl;
    cout << "The character that represents the number 49 in the ascii table is: " << cValue2 << endl;

    cout << endl << endl << "The position in te ascii table of the 'i' character is: " << cValue3 << endl;
    return 0;
}

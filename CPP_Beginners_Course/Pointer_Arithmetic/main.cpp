#include <iostream>

using namespace std;

int main()
{
    //making sure that the size of the array
    //is not gonna change.
    const int NSTRINGS = 5;
    string texts[NSTRINGS] = {"one", "two", "three", "four", "five"};

    string *pTexts = texts;

    pTexts += 3;

    cout<< *pTexts << endl;

    pTexts -= 2;

    cout<< *pTexts << endl;

    string *pEnd = &texts[NSTRINGS-1];

    cout<< *pEnd << endl;

    // If you wanna iterate through an array
    //using two pointers and the != comparison
    //you have to make the pEnd pointer to point
    // to the last + 1 position instead of just
    // point to the last position in the array.
    int s = sizeof(texts)/sizeof(string);
    pTexts = texts;
    pEnd = &texts[s];

    while(pTexts != pEnd){
        cout << *pTexts << " "<< flush;
        pTexts++;
    }
    // set pTexts back to start
    pTexts = texts;

    long elements = (long)(pEnd - pTexts);

    cout << endl << elements << endl;

    //Pointing to the middle of an array
    pTexts += s/2;
    cout<<*pTexts<<endl;
    return 0;
}

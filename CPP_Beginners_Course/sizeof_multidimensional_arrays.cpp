#include <iostream>

using namespace std;

int main()
{
    string animals[][3] = {
    {"fox", "dog", "cat"},
    {"mouse","squirrel", "parrot"}};

    cout << "The size of the multidimensional array is: " << sizeof(animals) << endl;
    cout << "The size of any string element in the array is: " << sizeof(animals[0][0]) << endl;
    cout << sizeof(string) << endl;

    cout <<endl << "The size of the first row is: " << sizeof(animals[0]) << endl;
    cout <<endl << "The size of the second row is: " << sizeof(animals[1]) << endl;
    cout << endl<<endl << "Iterating through the matrix: " << endl;
    int i_boundary = sizeof(animals)/sizeof(animals[0]);
    int j_boundary = sizeof(animals[0])/sizeof(string);

    for(int i=0; i<i_boundary; i++){
        for(int j=0; j<j_boundary; j++){
            cout << animals[i][j] << " " <<flush;
        }
        cout << endl;
    }

    return 0;
}

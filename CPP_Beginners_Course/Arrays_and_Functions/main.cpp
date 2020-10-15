#include <iostream>

using namespace std;

void show1(const int nElements, string texts[])
{
    /*
    You cannot use the code line bellow as a
    boundary for the for_loop, because you lose
    the size information when you pass the array
    as a  parameter. So you need to pass the actual
    size as a parameter in order to use it to iterate
    the array.
        */
    int s = sizeof(texts)/sizeof(string);
    cout<<"This size is wrong: "<<s<<endl;

    for(int i=0; i<nElements ; i++){
        cout << texts[i] << " "<< flush;
    }
    cout<<endl;
}

/*
This code do the same thing as the above code
passing an array as a parameter is equivalent
to pass a pointer of an array, what you actually
get is the size of a pointer (8 bytes) and not
the size of the array.
*/
void show2(const int nElements, string *texts)
{
    int s = sizeof(texts);
    cout<<endl<<"Size of the mere pointer: "<<s<<endl;
    for(int i=0; i<nElements ; i++){
        cout << texts[i] << " "<< flush;
    }
    cout<<endl;
}

/*
YOU CAN ACHIVE PASS ONLY THE ARRAY AS A PARAMETER
WITHOUT LOSSING THE SIZE OF IT USING THIS LESS COMMON
NOTATION, BUT IT'S STILL NOT BEEN A PRAGMATIC WAY OF
DO IT.
*/
void show3(string (&texts)[3])
{
    int s = sizeof(texts)/sizeof(string);
    for(int i=0; i<s; i++){
        cout << texts[i] << " "<< flush;
    }
    cout<<endl;
}
/*
HERE YOU CAN'T RETURN THIS POINTER BECAUSE IT
POINTS TO A LOCAL VARIABLE
void *getArray()
{
    string texts[] = {"one","two","three"};
    return texts;
}
*/

/*
HERE YOU CAN RETURN THIS POINTER BECAUSE THE ALLOCATED
MEMORY THAT IT'S POINTING OUT IT'S NOT LOCAL
*/
char *getMemory()
{
    char *pMem = new char [100];
    cout<<"Allocating a 100 char array."<<endl;

    return pMem;
}

void freeMemory(char *pMem)
{
    cout<<"Deallocating the 100 char array."<<endl;
    delete pMem;
}

int main()
{
    string texts[] = {"apple","orange","banana"};

    show1(3, texts);

    show2(3, texts);

    show3(texts);


    //Allocating a 100 char array.
    char *pMemory = getMemory();

    //Deallocating the 100 char array:
    freeMemory(pMemory);
    return 0;
}

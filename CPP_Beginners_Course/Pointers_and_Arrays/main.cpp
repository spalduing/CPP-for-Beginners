#include <iostream>

using namespace std;

int main()
{
    string texts[] = {"one", "two", "three"};
    string *pTexts = texts;
    int s = sizeof(texts)/sizeof(string);

    cout <<"There are " << s <<" elements in the array"<< endl;
    cout << endl<< endl;

    cout<<"Iterating by index"<<endl;
    cout<<"==================="<<endl;
    for(int i=0; i<s; i++){
        cout<< texts[i] << " "<< flush;
    }
    cout<< endl<< endl;
    cout<<"Iterating by pointer"<<endl;
    cout<<"==================="<<endl;
    for(int i=0; i<s; i++){
        cout<< pTexts[i] << " "<< flush;
    }

    cout<< endl<< endl;
    cout<<"Accessing to the first element by a pointer"<<endl;
    cout<<"============================================="<<endl;
    cout<< *pTexts<< endl;

    cout<< endl<< endl;
    cout<<"Another way to iterating by a pointer"<<endl;
    cout<<"============================================="<<endl;
    for(int i=0; i<s; i++, pTexts++){
        cout<< *pTexts << " "<< flush;
    }

    cout<< endl<< endl;
    cout<<"Another way to iterating using two pointers in a for_loop"<<endl;
    cout<<"============================================="<<endl;

    string *pEnd = &texts[2];
    for(string *pElement = texts; pElement<=pEnd; pElement++){
        cout<< *pElement << " "<< flush;
    }

    cout<< endl<< endl;
    cout<<"Another way to iterating using two pointers in a while_loop"<<endl;
    cout<<"============================================="<<endl;

    string *pElement = texts;
    while(pElement <= pEnd){
        cout<<*pElement<<" "<< flush;
        pElement++;
    }
    // Resetting pElement to it's initial position.
    pElement = texts;

    cout<< endl<< endl;
    cout<<"Another way to iterating using two pointers in a while_loop"<<endl;
    cout<<"============================================="<<endl;

    while(true){
        cout<<*pElement<<" "<< flush;
        if(pElement == pEnd){break;}
        pElement++;
    }

    return 0;
}

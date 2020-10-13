#include <iostream>

using namespace std;

int main()
{
    char text[] = "hello";
    int s = sizeof(text);
    cout<< text << endl;

    for(int i=0; i<s; i++){
        if(i == s-1){
            cout<<i << ":"<< (int)text[i];
            cout<<flush <<" This extra positions is here to let know where the array ends. It actually represents a 0";
        }
        cout<<i << ":"<< text[i]<<endl;
    }

    cout<<endl<<endl;

    int k = 0;
    while(true){
        if(text[k] == 0){break;}
        cout << text[k] << flush;
        k++;
    }

    return 0;
}

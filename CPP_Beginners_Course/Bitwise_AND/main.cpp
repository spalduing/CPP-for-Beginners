#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int color = 0x123456;

    /*
    *   Will gonna do an and operation
    *   so only the bits corresponding
    *   to red will remain.
    */
    unsigned int red = color & 0xFF0000;
    cout<<"red:     "<< setfill('0') << setw(6) << hex <<red<<endl;

    unsigned int green = color & 0x00FF00;
    cout<<"green:   "<< setfill('0') << setw(6) << hex <<green<<endl;

    unsigned int blue = color & 0x0000FF;
    cout<<"blue:    "<< setfill('0') << setw(6) << hex <<blue<<endl;

    //  color: 100010111101111011111011
    //  mask:  111111110000000000000000
    //  result:100010110000000000000000

    unsigned int new_color = 0;
    cout<<endl<<endl;
    cout<<"New color: "<< setfill('0') << setw(6) << hex << new_color << endl;

    new_color <<= 8;
    new_color += red;
    new_color <<= 8;
    new_color += green;
    new_color <<= 8;
    new_color += blue;

    cout<<"Old color: "<< setfill('0') << setw(6) << hex << color << endl;
    cout<<"New color: "<< setfill('0') << setw(6) << hex << new_color << endl;

    return 0;
}

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
    unsigned /*int*/char red = (color & 0xFF0000) >> 16;
    //unsigned /*int*/char red = color  >> 16;

    unsigned /*int*/char green = (color & 0x00FF00) >> 8;
    //unsigned /*int*/char green = color >> 8;

    unsigned /*int*/char blue = (color & 0x0000FF);
    //unsigned /*int*/char blue = color;

    //  color: 100010111101111011111011
    //  mask:  111111110000000000000000
    //  result:100010110000000000000000

    cout<<"red:     " << hex <<( int)red<<endl;
    cout<<"green:   " << hex << (int)green<<endl;
    cout<<"blue:    " << hex << (int)blue<<endl;



    unsigned int new_color = 0;
    cout<<endl<<endl;
    cout<<"New color: " << hex << setfill('0') << setw(6) << new_color << endl;

    new_color <<= 8;
    new_color += red;
    new_color <<= 8;
    new_color += green;
    new_color <<= 8;
    new_color += blue;

    cout<<"Old color: " << hex << color << endl;
    cout<<"New color: " << hex << new_color << endl;

    return 0;
}

#ifndef PARTICLE_H
#define PARTICLE_H
#include <iostream>
#include <SDL2/SDL.h>
#include "Screen.h"
using namespace std;

namespace spalduing
{


struct Particle
{
/*
*   In this case we declare make a struct instead of aclass,
*   in order to get an easy access to them. It's not recommended
*   to adopt a programing style because that's not ideal for the
*   sake of efficiency.
*/

    double m_x;
    double m_y;
    double m_xspeed;
    double m_yspeed;
public:
        Particle();
        ~Particle();
        void update();

};


}
#endif // PARTICLE_H

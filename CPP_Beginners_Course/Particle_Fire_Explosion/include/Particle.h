#ifndef PARTICLE_H
#define PARTICLE_H
#include <iostream>
#include <SDL2/SDL.h>
#include <stdlib.h>
#include <math.h>
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
    double m_speed;
    double m_direction;
public:
        Particle();
        ~Particle();
        void init();
        void update(int interval);

};


}
#endif // PARTICLE_H

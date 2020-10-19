#ifndef PARTICLE_H
#define PARTICLE_H
#include <iostream>
#include <SDL2/SDL.h>

using namespace std;

namespace spalduing
{


class Particle
{
/*
*   In this case we declare this variables public,
*   in order to get an easy access to them. It's not
*   recommended to adopt a programing style because that's
*   not ideal for the sake of efficiency.
*/
public:
    double m_x;
    double m_y;
public:
        Particle();
        ~Particle();

};


}
#endif // PARTICLE_H

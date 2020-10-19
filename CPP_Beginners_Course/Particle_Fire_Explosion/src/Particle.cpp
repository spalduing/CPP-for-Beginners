#include "Particle.h"
#include <stdlib.h>
namespace spalduing
{


Particle::Particle(): m_x( ( (2.0*rand())/RAND_MAX) -1),
                      m_y(( (2.0*rand())/RAND_MAX) -1)
{

}

Particle::~Particle()
{
    //dtor
}

void Particle::update()
{
    const double speed = 0.01;

    m_x += speed;
    m_y += speed;
}

}

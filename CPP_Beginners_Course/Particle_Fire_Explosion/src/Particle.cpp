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
    const double x_speed = ( 0.01 * rand()/RAND_MAX );
    const double y_speed = ( 0.01 * rand()/RAND_MAX );

    m_x += x_speed;
    m_y += y_speed;
}

}

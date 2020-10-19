#include "Particle.h"

namespace spalduing
{


Particle::Particle(): m_x(0),
                      m_y(0),
                      m_speed(0.04 * rand()/RAND_MAX),
                      m_direction( (2.0 *M_PI * rand())/RAND_MAX )
{
    m_speed *= m_speed;
}

Particle::~Particle()
{
    //dtor
}

void Particle::update(int interval)
{
    //m_direction += interval*4; /*psicodelico hermano*/
    //m_direction += interval*0.04; /*rasengan*/
    m_direction += interval*0.0003; /*Pit of souls*/
    double xspeed = m_speed * cos(m_direction);
    double yspeed = m_speed * sin(m_direction);

    m_x += xspeed * interval;
    m_y += yspeed * interval;
}

}

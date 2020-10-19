#include "Swarm.h"

namespace spalduing
{


Swarm::Swarm():m_pParticles(new Particle[NPARTICLES])
{
    //ctor
}

Swarm::~Swarm()
{
    delete [] m_pParticles;
}

void Swarm::update()
{
    for(int i=0; i<Swarm::NPARTICLES; i++)
    {
        m_pParticles[i].update();
    }
}

}

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

}

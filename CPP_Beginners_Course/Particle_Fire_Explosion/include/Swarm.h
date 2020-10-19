#ifndef SWARM_H
#define SWARM_H
#include "Particle.h"
namespace spalduing
{


class Swarm
{
public:
    const static int NPARTICLES = 5000;
private:
    Particle * const m_pParticles;
    int lastTime;
public:
        Swarm();
        ~Swarm();
        const Particle * const getParticles(){return m_pParticles;};
        void update(int elapsed);


};

}
#endif // SWARM_H

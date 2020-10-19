#include <iostream>
//#include <SDL2/SDL.h>
#include <math.h>
#include "screen.h"
#include "Swarm.h"
#include "Particle.h"
#include <stdlib.h>
#include <time.h>
using namespace std;
using namespace spalduing;

int main(int argc, char *argv[] )
{
    srand(time(NULL));

    Screen screen;
    screen.init();

    Swarm swarm;
    bool quit = false;
    SDL_Event event;

    while(!quit)
    {
        // Update particles
        // Draw particles
        int elapsed = SDL_GetTicks();
        screen.clear();
        swarm.update(elapsed);


        unsigned char green = (unsigned char)((1 + sin(elapsed * 0.001) ) * 128);
        unsigned char red = (unsigned char)((1 + sin(elapsed * 0.002) ) * 128);
        unsigned char blue = (unsigned char)((1 + sin(elapsed * 0.003) ) * 128);

        const Particle *pParticles = swarm.getParticles();

        for(int i=0; i<Swarm::NPARTICLES; i++)
        {
            Particle particle = pParticles[i];

            int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH/2;

            //If you think about it, when the particle is over zero,
            // zero times screen wdith stills zero, plus half of
            // the height is now the center of the screen.
            int y = particle.m_y  * Screen::SCREEN_WIDTH/2 + Screen::SCREEN_HIGH/2;
            screen.setPixel(x, y, red, green, blue);
        }

        // Draw the screen
        screen.update();

        // Check for messages/events
        quit=screen.processEvent(false, event);

    }

    screen.close();


    return 0;
}

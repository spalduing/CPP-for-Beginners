#include <iostream>
//#include <SDL2/SDL.h>
#include "screen.h"
using namespace std;
using namespace spalduing;

int main(int argc, char *argv[] )
{
    Screen screen;

    screen.init();

    bool quit = false;

    SDL_Event event;
    while(!quit)
    {
        // Update particles
        // Draw particles
        // Check for messages/events
        while(SDL_PollEvent(&event))
        {
            if(event.type == SDL_QUIT)
            {
                quit = true;
            }
        }
    }

    screen.close();

    return 0;
}

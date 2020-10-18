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

        screen.setPixel(400, 300, 255, 255, 255);

        // Draw the screen
        screen.update();

        // Check for messages/events
        quit=screen.processEvent(false, event);

    }

    screen.close();

    return 0;
}

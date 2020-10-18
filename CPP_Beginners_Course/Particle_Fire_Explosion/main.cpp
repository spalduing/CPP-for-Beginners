#include <iostream>
//#include <SDL2/SDL.h>
#include <math.h>
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
        int elapsed = SDL_GetTicks();
        unsigned char green = (unsigned char)((1 + sin(elapsed * 0.001) ) * 128);
        unsigned char red = (unsigned char)((1 + sin(elapsed * 0.002) ) * 128);
        unsigned char blue = (unsigned char)((1 + sin(elapsed * 0.003) ) * 128);

        for(int y=0; y<Screen::SCREEN_HIGH; y++)
        {
            for(int x=0; x<Screen::SCREEN_WIDTH; x++)
            {
                screen.setPixel(x, y, red, green, blue);
            }
        }

        screen.setPixel(400, 300, 255, 255, 255);

        // Draw the screen
        screen.update();

        // Check for messages/events
        quit=screen.processEvent(false, event);

    }

    screen.close();


    return 0;
}

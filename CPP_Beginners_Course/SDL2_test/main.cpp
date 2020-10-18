#include <iostream>
#include <SDL2/SDL.h>
using namespace std;

int main(int argc, char *argv[] )
{
    const int SCREEN_WIDTH = 800;
    const int SCREEN_HIGH = 600;
    if( SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        cout << "SDL could not initialise! SDL Error: " << SDL_GetError() << endl;
        return 1;
    }
    SDL_Window *window = SDL_CreateWindow(/*Name*/"Particle Fire Explosion",
                                          /*x position*/SDL_WINDOWPOS_UNDEFINED,
                                          /*y position*/SDL_WINDOWPOS_UNDEFINED,
                                          /*Width*/SCREEN_WIDTH, SCREEN_HIGH,
                                          /*High*/SDL_WINDOW_SHOWN);


    if(window == NULL)
    {
        SDL_Quit();
        return 2;
    }

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
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}

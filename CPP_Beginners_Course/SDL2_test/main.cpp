#include <iostream>
#include <SDL2/SDL.h>
using namespace std;

int main(int argc, char *argv[] )
{
    if( SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        cout << "SDL could not initialise! SDL Error: " << SDL_GetError() << endl;
        return 1;
    }
    cout << "SDL Init succeeded." << endl;
    SDL_Quit();

    return EXIT_SUCCESS ;
}

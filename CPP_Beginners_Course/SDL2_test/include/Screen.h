#ifndef SCREEN_H
#define SCREEN_H
#include <iostream>
#include <SDL2/SDL.h>
using namespace std;
namespace spalduing
{


class Screen
{
public:
    static const int SCREEN_WIDTH = 800;
    static const int SCREEN_HIGH = 600;

private:
    SDL_Window *m_window;
    SDL_Renderer * m_renderer;
    SDL_Texture *m_texture;
    Uint32 *m_buffer;

public:
    Screen();
    ~Screen();
    bool init();
    bool processEvent();
    void close();

};

}
#endif // SCREEN_H

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
    Uint32 *m_buffer2;

public:
    Screen();
    ~Screen();
    bool init();
    void update();
    void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
    void clear();
    void boxBlur();
    bool processEvent(bool quit, SDL_Event &event);
    void close();

};

}
#endif // SCREEN_H

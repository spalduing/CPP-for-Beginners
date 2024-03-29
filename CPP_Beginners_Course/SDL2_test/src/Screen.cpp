#include "Screen.h"

namespace spalduing
{



Screen::Screen():m_window(NULL),m_renderer(NULL),m_texture(NULL),
                m_buffer(NULL){}

Screen::~Screen(){}


bool Screen::init()
{
    if( SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        return false;
    }
    m_window = SDL_CreateWindow(/*Name*/"Particle Fire Explosion",
                                          /*x position*/SDL_WINDOWPOS_UNDEFINED,
                                          /*y position*/SDL_WINDOWPOS_UNDEFINED,
                                          /*Width*/SCREEN_WIDTH, SCREEN_HIGH,
                                          /*High*/SDL_WINDOW_SHOWN);


    if(m_window == NULL)
    {
        SDL_Quit();
        return false;
    }

    m_renderer = SDL_CreateRenderer(m_window, -1, SDL_RENDERER_PRESENTVSYNC);
    m_texture = SDL_CreateTexture(m_renderer,
                                             SDL_PIXELFORMAT_RGBA8888,
                                             SDL_TEXTUREACCESS_STATIC,
                                             SCREEN_WIDTH,
                                             SCREEN_HIGH);

    if(m_renderer == NULL){
        SDL_DestroyWindow(m_window);
        SDL_Quit();
        return false;
    }
    if(m_texture == NULL){
        SDL_DestroyRenderer(m_renderer);
        SDL_DestroyWindow(m_window);
        SDL_Quit();
        return false;
    }

    m_buffer = new Uint32[SCREEN_WIDTH*SCREEN_HIGH];

    memset(m_buffer, 0, SCREEN_WIDTH*SCREEN_HIGH*sizeof(Uint32));

    for(int i=0; i<SCREEN_WIDTH*SCREEN_HIGH; i++)
    {
        m_buffer[i] = 0xFFFF0000;
    }

    SDL_UpdateTexture(m_texture, NULL, m_buffer, SCREEN_WIDTH*sizeof(Uint32));
    SDL_RenderClear(m_renderer);
    SDL_RenderCopy(m_renderer, m_texture, NULL, NULL);
    SDL_RenderPresent(m_renderer);

    return true;
}

bool Screen::processEvent()
{

}

void Screen::close()
{
    delete [] m_buffer;
    SDL_DestroyRenderer(m_renderer);
    SDL_DestroyTexture(m_texture);
    SDL_DestroyWindow(m_window);
    SDL_Quit();
}


}

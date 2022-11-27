#ifndef TUTORIAL_H
#define TUTORIAL_H

#include <stdio.h>
#include <stdbool.h>
#include <SDL2/SDL.h>
#include <string>

extern SDL_Surface* gScreenSurface;
extern SDL_Window* gWindow;
extern const int SCREEN_WIDTH;
extern const int SCREEN_HEIGHT;

enum KeyPressSurfaces
{
    KEY_PRESS_SURFACE_DEFAULT,
    KEY_PRESS_SURFACE_UP,
    KEY_PRESS_SURFACE_DOWN,
    KEY_PRESS_SURFACE_LEFT,
    KEY_PRESS_SURFACE_RIGHT,
    KEY_PRESS_SURFACE_TOTAL
};


SDL_Surface* loadSurface(std::string path);
extern SDL_Surface* gKeyPressSurfaces[KEY_PRESS_SURFACE_TOTAL];
//Start server
bool init();
//Load media
bool loadMedia();
//Free media and shuts down SDL
void close();

#endif

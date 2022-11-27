#ifndef TUTORIAL_H
#define TUTORIAL_H

#include <stdio.h>
#include <stdbool.h>
#include <SDL2/SDL.h>

extern SDL_Surface* gScreenSurface;
extern SDL_Window* gWindow;
extern SDL_Surface* gXOut;
extern const int SCREEN_WIDTH;
extern const int SCREEN_HEIGHT;

//Start server
bool init();
//Load media
bool loadMedia();
//Free media and shuts down SDL
void close();

#endif

//Using SDL and standard IO
#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdarg.h>
#include "tutorial.h"


const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
SDL_Window* gWindow = NULL;
SDL_Surface* gScreenSurface = NULL;
SDL_Surface* gHelloWorld = NULL;
SDL_Surface* gCurrentSurface = NULL;
SDL_Surface* gKeyPressSurfaces[KEY_PRESS_SURFACE_TOTAL];


/**
 * main - main function
 * @argc: count of arguments passed on command line
 * @args: list of arguments
 * Return: Always true of Error on failure
 */
int main(int argc, char* args[])
{

		//Start up SDL and create Window
		if(!init())
				printf("Failed to initialize!\n");
		else
		{
				if(!loadMedia())
						printf("Failed to load media!\n");
				else
				{
						SDL_Event e;
						bool quit = false;
						gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

						while(quit == false)
						{
								while(SDL_PollEvent(&e))
								{
										if(e.type == SDL_QUIT)
												quit = true;
								
										else if (e.type == SDL_KEYDOWN)
										{
												switch(e.key.keysym.sym)
												{
														case SDLK_UP:
														gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];
														break;

														case SDLK_DOWN:
														gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];
														break;

														case SDLK_LEFT:
														gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];
														break;

														case SDLK_RIGHT:
														gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];
														break;

														default:
														gCurrentSurface: gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];
														break;

												}
										}
								}
								SDL_BlitSurface(gCurrentSurface, NULL, gScreenSurface, NULL);

								SDL_UpdateWindowSurface(gWindow);

						}
				}
		}
		//Free resources and close SDL
		close();


		return (0);
}

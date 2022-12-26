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
SDL_Surface* gStretchedSurface = NULL;


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

						while(quit == false)
						{
								while(SDL_PollEvent(&e))
								{
										if(e.type == SDL_QUIT)
												quit = true;
								
								}
								SDL_Rect stretchRect;
								stretchRect.x = 0;
								stretchRect.y = 0;
								stretchRect.w = SCREEN_WIDTH;
								stretchRect.h = SCREEN_HEIGHT;
								SDL_BlitScaled(gStretchedSurface, NULL, gScreenSurface, &stretchRect);

								SDL_UpdateWindowSurface(gWindow);

						}
				}
		}
		//Free resources and close SDL
		close();


		return (0);
}

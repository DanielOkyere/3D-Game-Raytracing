#include "tutorial.h"


/**
 * init - initialises application
 * Return: True or False
 */
bool init()
{
		//Initialization Flag
		bool success = true;

		//Initialize SDL
		if(SDL_Init(SDL_INIT_VIDEO) < 0)
		{
				printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
				success = false;
		}
		else
		{
				//Create Window
				gWindow = SDL_CreateWindow("SDL Tutorial 2",
								SDL_WINDOWPOS_UNDEFINED,
								SDL_WINDOWPOS_UNDEFINED,
								SCREEN_WIDTH,
								SCREEN_HEIGHT,
								SDL_WINDOW_SHOWN);
				if(gWindow == NULL)
				{
						printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
						success = false;
				}
				else
				{
						//Get window surface
						gScreenSurface = SDL_GetWindowSurface(gWindow);
				}
		}
		return (success);
}


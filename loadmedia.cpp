#include "tutorial.h"

/**
 * loadMedia - Loads the media
 * Return: Success or failure
 */
bool loadMedia()
{
		//Loading success flag
		bool success = true;

		//Load splash image
		gXOut = SDL_LoadBMP("./images/x.bmp");
		if(gXOut == NULL)
		{
				printf("Unable to load Image %s! SDL Error: %s\n", "hello_world.bmp", SDL_GetError());
				success = false;
		}
		return (success);
}

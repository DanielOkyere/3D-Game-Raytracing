#include "tutorial.h"

/**
* loadSurface - Function to load the surface
* @path: string path to file
* Return: Pointer to path;
*/
SDL_Surface* loadSurface(std::string path)
{
	SDL_Surface* optimizedSurface = NULL;
        SDL_Surface* loadedSurface = SDL_LoadBMP(path.c_str());
        if (loadedSurface == NULL)
        {
                printf("Unable to load Image %s! SDL Error: %s\n", path.c_str(), SDL_GetError());
        }
	else
	{
		optimizedSurface = SDL_ConvertSurface(loadedSurface, gScreenSurface->format, 0);
		if (optimizedSurface == NULL)
		{
			printf("Unable to optimize image %s! SDL Error: %s\n", path.c_str(), SDL_GetError());
		}

		SDL_FreeSurface(loadedSurface);
	}
        return (optimizedSurface);
}

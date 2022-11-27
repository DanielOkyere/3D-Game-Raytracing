#include "tutorial.h"

/**
* loadSurface - Function to load the surface
* @path: string path to file
* Return: Pointer to path;
*/
SDL_Surface* loadSurface(std::string path)
{
        SDL_Surface* loadedSurface = SDL_LoadBMP(path.c_str());
        if (loadedSurface == NULL)
        {
                printf("Unable to load Image %s! SDL Error: %s\n", path.c_str(), SDL_GetError());
        }
        return (loadedSurface);
}

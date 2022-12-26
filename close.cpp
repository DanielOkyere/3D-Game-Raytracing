#include "tutorial.h"

/**
 * close - Closes and deallocate surface
 */
void close()
{
		//Deallocate surfaces
		SDL_FreeSurface(gStretchedSurface);
		gStretchedSurface = NULL;

		//Destroy window
		SDL_DestroyWindow(gWindow);
		gWindow = NULL;

		//Quit SDL subsystems
		SDL_Quit();
}

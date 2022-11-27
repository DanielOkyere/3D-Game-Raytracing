#include "tutorial.h"

/**
 * close - Closes and deallocate surface
 */
void close()
{
		//Deallocate surface
		SDL_FreeSurface(gXOut);
		gXOut = NULL;

		//Destroy window
		SDL_DestroyWindow(gWindow);
		gWindow = NULL;

		//Quit SDL subsystems
		SDL_Quit();
}

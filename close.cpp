#include "tutorial.h"

/**
 * close - Closes and deallocate surface
 */
void close()
{
		//Deallocate surfaces
		for (int i = 0; i < KEY_PRESS_SURFACE_TOTAL; ++i)
		{
				SDL_FreeSurface(gKeyPressSurfaces[i]);
				gKeyPressSurfaces[i] = NULL;

		}

		//Destroy window
		SDL_DestroyWindow(gWindow);
		gWindow = NULL;

		//Quit SDL subsystems
		SDL_Quit();
}

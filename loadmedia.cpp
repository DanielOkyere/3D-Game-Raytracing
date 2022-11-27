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
		gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT] = loadSurface("./images/press.bmp");
		if(gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT] == NULL)
		{
			printf("Failed to load default image!\n");
			success = false;
		}

		//Load up surface
		gKeyPressSurfaces[KEY_PRESS_SURFACE_UP] = loadSurface("./images/up.bmp");
		if(gKeyPressSurfaces[KEY_PRESS_SURFACE_UP] == NULL)
		{
			printf("Failed to load up image!\n");
			success = false;
		}
		//load down surface
		gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN] = loadSurface("./images/down.bmp");
		if(gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN] == NULL)
		{
			printf("Failed to load down image!\n");
			success = false;
		}
		//load left surface
		gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT] = loadSurface("./images/left.bmp");
		if(gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT] == NULL)
		{
			printf("Failed to load left image!\n");
			success = false;
		}

		//load right surface
		gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT] = loadSurface("./images/right.bmp");
		if(gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT] == NULL)
		{
			printf("Failed to load right image\n");
			success = false;
		}

		return (success);
}

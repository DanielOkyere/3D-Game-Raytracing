#include "tutorial.h"

/**
 * loadMedia - Loads the media
 * Return: Success or failure
 */
bool loadMedia()
{
		//Loading success flag
		bool success = true;
		
		gStretchedSurface = loadSurface("./images/stretch.bmp");
		if(gStretchedSurface == NULL)
		{
			printf("Failed to load strecthinb image!\n");
			success = false;
		}

		return (success);
}

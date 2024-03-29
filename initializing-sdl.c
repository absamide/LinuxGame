/*****************************************************************
*	CODE FILENAME:
*	AUTHOR:		Alex Samide
*	DATE:
*
*	FUNCTIONS:
*
*****************************************************************/

/* Example of Initializing SDL */

#include "SDL/SDL.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{

	// Variable Declarations
	SDL_Surface *screen;

	// Initialize SDL's video system and check for errors
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		printf("Unable to initialize SDL: %s\n", SDL_GetError());
		return 1;
	}

	// Make sure SDL_Quit gets called when program exists!
	atexit(SDL_Quit);

	// Attempt to set a 640x480 hicolor video mode
	screen = SDL_SetVideoMode(640, 480, 16, SDL_FULLSCREEN);
	if(screen == NULL)
	{
		printf("Unable to set video mode: %s\n", SDL_GetError());
		return 1;
	}

	// If we got this far everythig worked
	printf("Success!\n");


	return 0;
}

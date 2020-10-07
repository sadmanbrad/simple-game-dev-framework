#ifndef __SGDF_SPRITE_HH__
#define __SGDF_SPRITE_HH__

#include <string>

class SDL_Texture;

class Sprite
{
public:
	Sprite(SDL_Texture* texture);

	SDL_Texture* texture;
};

#endif
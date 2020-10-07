#ifndef __SGDF_RENDERING_CONTEXT_HH__
#define __SGDF_RENDERING_CONTEXT_HH__

#include <SDL2/SDL.h>
#include "GameWindow.hh"
#include "Rect.hh"

class RenderingContext
{
public:
	RenderingContext(GameWindow& window);

	void renderTexture(SDL_Texture& texture, Rect destination);
private:
	GameWindow& window;
	SDL_Renderer* renderer;
};

#endif
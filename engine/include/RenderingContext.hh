#ifndef __SGDF_RENDERING_CONTEXT_HH__
#define __SGDF_RENDERING_CONTEXT_HH__

#include <SDL2/SDL.h>
#include <memory>
#include "Sprite.hh"
#include "GameWindow.hh"
#include "Rect.hh"

class RenderingContext
{
public:
	RenderingContext(GameWindow& window);

	void renderTexture(SDL_Texture& texture, Rect destination);

	std::shared_ptr<Sprite> createSprite(std::string filename);
private:
	GameWindow& window;
	SDL_Renderer* renderer;
};

#endif
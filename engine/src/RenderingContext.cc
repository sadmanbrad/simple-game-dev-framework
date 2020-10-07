#include "RenderingContext.hh"
#include <SDL2/SDL_image.h>

RenderingContext::RenderingContext(GameWindow& window) : window(window) {
	renderer = SDL_CreateRenderer(window.window, -1, SDL_RENDERER_ACCELERATED);
}

void RenderingContext::renderTexture(SDL_Texture& texture, Rect destination) {
	SDL_Rect dstrect = {destination.x, destination.y, destination.width, destination.height};
	SDL_RenderCopy(renderer, &texture, nullptr, &dstrect);
}

std::shared_ptr<Sprite> RenderingContext::createSprite(std::string filename) {
	SDL_Texture *texture = IMG_LoadTexture(renderer, filename.c_str());
	// TODO: throw an exception if loading texture failed
	return std::make_shared<Sprite>(texture);
}
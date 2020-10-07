#include "RenderingContext.hh"


RenderingContext::RenderingContext(GameWindow& window) : window(window) {
	renderer = SDL_CreateRenderer(window.window, -1, SDL_RENDERER_ACCELERATED);
}

void RenderingContext::renderTexture(SDL_Texture& texture, Rect destination) {
	SDL_Rect dstrect = {destination.x, destination.y, destination.width, destination.height};
	SDL_RenderCopy(renderer, &texture, nullptr, &dstrect);
}
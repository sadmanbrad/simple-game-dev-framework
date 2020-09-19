#include "Engine.hh"
#include "Logger.hh"


Engine::Engine() {

}

void Engine::start() {
	if (SDL_Init(SDL_INIT_VIDEO) != 0){
		Logger::error(std::string("SDL_Init Error: ") + SDL_GetError());
		return;
	}
}
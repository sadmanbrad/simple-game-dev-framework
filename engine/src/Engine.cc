#include "Engine.hh"
#include "Logger.hh"
#include "SgdfInitException.hh"

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>

using string = std::string;

const string START_ERROR_PREFIX = "Could not start engine: ";

Engine::Engine() {

}

void Engine::start() {
	if (SDL_Init(0) < 0) {
		Logger::error(START_ERROR_PREFIX + "Error initializing SDL: " + SDL_GetError());
		throw SgdfInitException(string("SDL_Init Error\n") + SDL_GetError());
	}
	auto subSystems = (SDL_INIT_VIDEO | SDL_INIT_EVENTS | SDL_INIT_AUDIO);
	if (SDL_WasInit(subSystems) != 0) {
		Logger::error(START_ERROR_PREFIX + "Error initializing SDL: " + SDL_GetError());
		throw SgdfInitException(string("SDL_WasInit Error\n") + SDL_GetError());
	}
	if (SDL_InitSubSystem(subSystems) < 0) {
		Logger::error(START_ERROR_PREFIX + "Error initializing SDL: " + SDL_GetError());
		throw SgdfInitException(string("SDL_InitSubSystem Error\n.") + SDL_GetError());
	}
	if (!(IMG_Init(IMG_INIT_PNG) & IMG_INIT_PNG)) {
		Logger::error(START_ERROR_PREFIX + "Error initializing SDL Image: " + SDL_GetError());
		throw SgdfInitException(string("IMG_Init Error\n") + SDL_GetError());
	}
	if (TTF_Init() == -1) {
		Logger::error(START_ERROR_PREFIX + "Error initializing SDL ttf: " + SDL_GetError());
		throw SgdfInitException(string("TTF_Init Error\n") + SDL_GetError());
	}
	if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0) {
		Logger::error(START_ERROR_PREFIX + "Error initializing SDL Mixer: " + SDL_GetError());
		throw SgdfInitException(string("SDL_Mixer Error:") + Mix_GetError());
	}
	Logger::info("Engine started");
}

void Engine::run() {
}

void Engine::shutdown() {
	Logger::info("Shutting down");
	if (TTF_WasInit()) {
		TTF_Quit();
	}
	Mix_CloseAudio();
	Mix_Quit();
	SDL_Quit();
}
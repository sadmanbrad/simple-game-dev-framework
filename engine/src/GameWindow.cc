#include "GameWindow.hh"

GameWindow::GameWindow(std::string name, int width, int height) {
	window = SDL_CreateWindow(name.c_str(), 0, 0, width, height, 0);
}

GameWindow::~GameWindow() {
	SDL_DestroyWindow(window);
}
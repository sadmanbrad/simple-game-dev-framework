#ifndef __B_GAME_WINDOW_HH__
#define __B_GAME_WINDOW_HH__

#include <SDL2/SDL.h>
#include <string>

class GameWindow
{
public:
	GameWindow(std::string name, int width, int height);
	~GameWindow();
	
	void render();
};

#endif
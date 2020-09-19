#ifndef __B_GAME_WINDOW_HH__
#define __B_GAME_WINDOW_HH__
#include <SDL2/SDL.h>

class GameWindow
{
public:
	GameWindow(string name, int width, int height);
	~GameWindow();
	
	void render();
};

#endif
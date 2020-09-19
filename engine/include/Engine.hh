#ifndef __B_ENGINE_HH__
#define __B_ENGINE_HH__

#include <SDL2/SDL.h>

class Engine
{
public:
	Engine();
	~Engine();
	
	void start();
	void run();
	void shutdown();
};

#endif
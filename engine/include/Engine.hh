#ifndef __SGDF_ENGINE_HH__
#define __SGDF_ENGINE_HH__

#include "GameWindow.hh"
#include "RenderingContext.hh"

class Engine
{
public:
	Engine();
	
	void start();
	void run();
	void shutdown();

private:
	std::unique_ptr<GameWindow> window;
	std::unique_ptr<RenderingContext> renderingContext;

	void render();
};

#endif
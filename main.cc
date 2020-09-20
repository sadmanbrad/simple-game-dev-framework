#include "Engine.hh"

int main(int argc, char const *argv[])
{
	Engine engine;
	engine.start();
	engine.run();
	engine.shutdown();
	return 0;
}
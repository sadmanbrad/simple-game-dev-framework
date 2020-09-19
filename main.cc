#include "Logger.hh"

int main(int argc, char const *argv[])
{
	Logger::info("Starting app");
	Logger::warn("Hmmm");
	Logger::debug("CheckShit");
	Logger::error("stupid shit happened");
	return 0;
}
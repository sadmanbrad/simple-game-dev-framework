#ifndef __SGDF_LOGGER_HH__
#define __SGDF_LOGGER_HH__

#include <string>

class Logger
{
public:
	static void info(std::string message);
	static void warn(std::string message);
	static void error(std::string message);

	static void debug(std::string message);
};

#endif
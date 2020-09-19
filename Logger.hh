#ifndef __B_LOGGER_HH__
#define __B_LOGGER_HH__

class Logger
{
public:
	Logger() = delete;

	static void log(string message);
	static void warn(string message);
	static void error(string message);

	static void debug(string message);
};

#endif
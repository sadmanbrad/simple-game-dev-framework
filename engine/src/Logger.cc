#include "Logger.hh"
#include <iostream>

static const std::string RESET   = "\033[0m";
static const std::string BLACK   = "\033[30m";
static const std::string RED     = "\033[31m";
static const std::string GREEN   = "\033[32m";
static const std::string YELLOW  = "\033[33m";
static const std::string BLUE    = "\033[34m";
static const std::string MAGENTA = "\033[35m";
static const std::string CYAN    = "\033[36m";
static const std::string WHITE   = "\033[37m";
static const std::string BOLD    = "\033[1m";

static const std::string INFO_MESSAGE_PREFIX    = "INFO: ";
static const std::string WARNING_MESSAGE_PREFIX = "WARN: ";
static const std::string ERROR_MESSAGE_PREFIX   = "ERROR: ";
static const std::string DEBUG_MESSAGE_PREFIX   = "DEBUG: ";

static std::ostream& outStream = std::cout;
static std::ostream& debugOutStream = std::cerr;

void Logger::info(std::string message) {
	outStream << GREEN << INFO_MESSAGE_PREFIX << message << RESET << std::endl;
}

void Logger::warn(std::string message) {
	outStream << YELLOW << WARNING_MESSAGE_PREFIX << message << RESET << std::endl;
}

void Logger::error(std::string message) {
	outStream << BOLD << RED << ERROR_MESSAGE_PREFIX << message << RESET << std::endl;
}

void Logger::debug(std::string message) {
	debugOutStream << DEBUG_MESSAGE_PREFIX << message << std::endl;
}
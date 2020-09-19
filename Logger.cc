#include "Logger.hh"
#include <iostream>

static constexpr string RESET   = "\033[0m";
static constexpr string BLACK   = "\033[30m";
static constexpr string RED     = "\033[31m";
static constexpr string GREEN   = "\033[32m";
static constexpr string YELLOW  = "\033[33m";
static constexpr string BLUE    = "\033[34m";
static constexpr string MAGENTA = "\033[35m";
static constexpr string CYAN    = "\033[36m";
static constexpr string WHITE   = "\033[37m";
static constexpr string BOLD    = "\033[1m";

static constexpr string INFO_MESSAGE_PREFIX    = "INFO: ";
static constexpr string WARNING_MESSAGE_PREFIX = "WARN: ";
static constexpr string ERROR_MESSAGE_PREFIX   = "ERROR: ";
static constexpr string DEBUG_MESSAGE_PREFIX   = "DEBUG: ";

static constexpr std::ostream outStream = std::cout;
static constexpr std::ostream debugOutStream = std::cerr;

void Logger::info(string message) {
	outStream << GREEN << INFO_MESSAGE_PREFIX << message << RESET << std::endl;
}

void Logger::warn(string message) {
	outStream << YELLOW << WARNING_MESSAGE_PREFIX << message << RESET << std::endl;
}

void Logger::error(string message) {
	outStream << BOLD << RED << ERROR_MESSAGE_PREFIX << message << RESET << std::endl;
}

void Logger::debug(string message) {
	debugOutStream << DEBUG_MESSAGE_PREFIX << message << std::endl;
}
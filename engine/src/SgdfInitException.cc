#include "SgdfInitException.hh"

SgdfInitException::SgdfInitException(std::string message) : 
		errorMessage(std::move(message)) {

}
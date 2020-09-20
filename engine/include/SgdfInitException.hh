#ifndef __SGDF_INIT_EXCEPTION_HH__
#define __SGDF_INIT_EXCEPTION_HH__

#include <string>

class SgdfInitException
{
public:
	explicit SgdfInitException(std::string message);

	inline std::string getErrorMessage() const { return errorMessage; }
private:
	std::string errorMessage;
};

#endif
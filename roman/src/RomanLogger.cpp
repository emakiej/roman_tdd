#include "roman/RomanLogger.hpp"
#include <iostream>

namespace roman
{
namespace logger
{
void Logger::error(std::string message)
{
    std::cout << "ERROR: " << message << std::endl;
}

void Logger::info(std::string message)
{
    std::cout << "INFO: " << message << std::endl;
}
}
}
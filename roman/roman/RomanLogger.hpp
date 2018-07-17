#pragma once

#include <string>

namespace roman
{
namespace logger
{
class Logger
{
    void error(std::string message);
    void info(std::string message);
};
}
}
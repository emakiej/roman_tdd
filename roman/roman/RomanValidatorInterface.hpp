#pragma once

#include <string>

namespace roman
{
namespace validator
{
class RomanValidatorInterface
{
public:
    virtual bool isValid(std::string) const = 0;
    virtual ~RomanValidatorInterface()
    {
    }
};
}
}

#pragma once

#include <string>
#include "roman/RomanValidatorInterface.hpp"

namespace roman
{
namespace validator
{
class RomanValidator : public RomanValidatorInterface
{
public:
    bool isValid(std::string) const override;
};
}
}

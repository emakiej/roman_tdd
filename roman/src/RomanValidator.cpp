#include "roman/RomanValidator.hpp"

namespace roman
{
namespace validator
{
bool RomanValidator::isValid(std::string input) const
{
    if(input.empty())
    {
        return true;
    }
    switch(input.at(0))
    {
    case 'I':
    case 'V':
    case 'X':
    case 'L':
    case 'C':
    case 'D':
    case 'M':
        return true;
    default:
        return false;
    }
}
}
}

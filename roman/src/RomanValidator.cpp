#include "roman/RomanValidator.hpp"

namespace roman
{
namespace validator
{
bool RomanValidator::isValidInput(std::string input)
{
    if(input.empty())
    {
        return true;
    }
    else if(input.length() == 1)
    {
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
        }
    }
    return false;
}
}
}
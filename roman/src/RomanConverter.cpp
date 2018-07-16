#include <roman/RomanConverter.h>
#include <exception>

namespace roman
{
namespace converter
{
unsigned convert_to_arabic(const roman::validator::RomanValidatorInterface& validator, std::string roman)
{
    if(!validator.isValid(roman))
    {
        throw std::exception();
    }
    if(roman.empty())
    {
        return 0;
    }
    else if(roman.length() == 1)
    {
        switch(roman.at(0))
        {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        }
    }
    throw std::exception();
}
}
}
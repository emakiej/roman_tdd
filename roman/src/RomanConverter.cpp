#include <roman/RomanConverter.h>
#include <exception>
#include <unordered_map>

namespace roman
{
namespace converter
{
unsigned convert_to_arabic(const roman::validator::RomanValidatorInterface& validator, std::string input)
{
    if(!validator.isValid(input))
    {
        throw std::exception();
    }

    const std::unordered_map<char, unsigned> roman_digit_2_arabic = {{'I', 1},   {'V', 5},   {'X', 10},  {'L', 50},
                                                                     {'C', 100}, {'D', 500}, {'M', 1000}};
    int value = 0;
    char prev = '%';
    for(int i = (input.length() - 1); i >= 0; i--)
    {
        if(roman_digit_2_arabic.at(input[i]) < value && (input[i] != prev))
        {
            value -= roman_digit_2_arabic.at(input[i]);
            prev = input[i];
        }
        else
        {
            value += roman_digit_2_arabic.at(input[i]);
            prev = input[i];
        }
    }
    return value;
}
}
}
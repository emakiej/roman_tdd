#pragma once

#include <string>
#include <roman/RomanValidator.hpp>

namespace roman
{
namespace converter
{
unsigned convert_to_arabic(const roman::validator::RomanValidator&, std::string);
}
}

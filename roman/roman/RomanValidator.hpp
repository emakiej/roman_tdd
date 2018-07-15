#pragma once

#include <string>
#include "RomanValidatorInterface.hpp"

namespace roman {
    namespace validator {
        class RomanValidator
        {
        public:
            bool isValidInput(std::string);
        };
    }
}
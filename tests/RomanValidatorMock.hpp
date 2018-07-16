#pragma once

#include <gmock/gmock.h>
#include "roman/RomanValidatorInterface.hpp"

class RomanValidatorMock : roman::validator::RomanValidatorInterface
{
    MOCK_CONST_METHOD1(isValid, bool(std::string));
};

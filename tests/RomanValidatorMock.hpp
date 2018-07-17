#pragma once

#include <gmock/gmock.h>
#include "roman/RomanValidatorInterface.hpp"

class RomanValidatorMock : public roman::validator::RomanValidatorInterface
{
public:
    MOCK_CONST_METHOD1(isValid, bool(std::string));
};

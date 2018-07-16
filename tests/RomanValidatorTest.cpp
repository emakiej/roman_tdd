#include "roman/RomanValidator.hpp"
#include <gtest/gtest.h>

using namespace roman::validator;
using namespace testing;

struct RomanValidatorTest : Test
{
    RomanValidator sut;
};

TEST_F(RomanValidatorTest, WhenInputEmptyReturnsTrue)
{
    EXPECT_TRUE(sut.isValid(""));
}

TEST_F(RomanValidatorTest, WhenSingleIReturnsTrue)
{
    EXPECT_TRUE(sut.isValid("I"));
}

TEST_F(RomanValidatorTest, WhenSingleVReturnsTrue)
{
    EXPECT_TRUE(sut.isValid("V"));
}

TEST_F(RomanValidatorTest, WhenSingleXReturnsTrue)
{
    EXPECT_TRUE(sut.isValid("X"));
}

TEST_F(RomanValidatorTest, WhenSingleLReturnsTrue)
{
    EXPECT_TRUE(sut.isValid("L"));
}

TEST_F(RomanValidatorTest, WhenSingleCReturnsTrue)
{
    EXPECT_TRUE(sut.isValid("C"));
}

TEST_F(RomanValidatorTest, WhenSingleDReturnsTrue)
{
    EXPECT_TRUE(sut.isValid("D"));
}

TEST_F(RomanValidatorTest, WhenSingleMReturnsTrue)
{
    EXPECT_TRUE(sut.isValid("M"));
}

TEST_F(RomanValidatorTest, WhenIncorrectCharacterReturnsFalse)
{
    EXPECT_FALSE(sut.isValid("@"));
}

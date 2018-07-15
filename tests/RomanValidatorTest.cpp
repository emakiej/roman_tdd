#include <roman/RomanValidator.hpp>

#include <gtest/gtest.h>

namespace
{

using namespace roman::validator;

class ValidatorTest : public testing::Test
{
public:
    RomanValidator sut;
};

TEST_F(ValidatorTest, WhenEmptyShouldReturnTrue)
{
    EXPECT_TRUE(sut.isValidInput(""));
}

TEST_F(ValidatorTest, WhenSingleIShouldReturnTrue)
{
    EXPECT_TRUE(sut.isValidInput("I"));
}

TEST_F(ValidatorTest, WhenSingleVShouldReturnTrue)
{
    EXPECT_TRUE(sut.isValidInput("V"));
}

TEST_F(ValidatorTest, WhenSingleXShouldReturnTrue)
{
    EXPECT_TRUE(sut.isValidInput("X"));
}

TEST_F(ValidatorTest, WhenSingleLShouldReturnTrue)
{
    EXPECT_TRUE(sut.isValidInput("L"));
}

TEST_F(ValidatorTest, WhenSingleCShouldReturnTrue)
{
    EXPECT_TRUE(sut.isValidInput("C"));
}

TEST_F(ValidatorTest, WhenSingleDShouldReturnTrue)
{
    EXPECT_TRUE(sut.isValidInput("D"));
}

TEST_F(ValidatorTest, WhenSingleMShouldReturnTrue)
{
    EXPECT_TRUE(sut.isValidInput("M"));
}

TEST_F(ValidatorTest, WhenSingleWrongCharacterShouldReturnFalse)
{
    EXPECT_FALSE(sut.isValidInput("m"));
}
}
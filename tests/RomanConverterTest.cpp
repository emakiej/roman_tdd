#include <roman/RomanConverter.h>
#include "RomanValidatorMock.hpp"

#include <gtest/gtest.h>

namespace
{

using namespace roman::converter;
using namespace testing;

struct ConverterTest : public Test
{
    void SetUp() override
    {
        //test custom mock method with on call (returned value overrided)
        EXPECT_CALL(validator, isValid(_)).WillOnce(Return(true));
    }
    StrictMock<RomanValidatorMock> validator;
};

TEST_F(ConverterTest, WhenEmptyShouldReturnZero)
{
    EXPECT_EQ(convert_to_arabic(validator, ""), 0);
}

TEST_F(ConverterTest, WhenSingleIShouldReturn1)
{
    EXPECT_EQ(convert_to_arabic(validator, "I"), 1);
}

TEST_F(ConverterTest, WhenSingleVShouldReturn5)
{
    EXPECT_EQ(convert_to_arabic(validator, "V"), 5);
}

TEST_F(ConverterTest, WhenSingleXShouldReturn10)
{
    EXPECT_EQ(convert_to_arabic(validator, "X"), 10);
}

TEST_F(ConverterTest, WhenSingleLShouldReturn50)
{
    EXPECT_EQ(convert_to_arabic(validator, "L"), 50);
}

TEST_F(ConverterTest, WhenSingleCShouldReturn100)
{
    EXPECT_EQ(convert_to_arabic(validator, "C"), 100);
}

TEST_F(ConverterTest, WhenSingleDShouldReturn500)
{
    EXPECT_EQ(convert_to_arabic(validator, "D"), 500);
}

TEST_F(ConverterTest, WhenSingleMShouldReturn1000)
{
    EXPECT_EQ(convert_to_arabic(validator, "M"), 1000);
}

TEST_F(ConverterTest, WhenSingleWrongCharacterShouldThrow)
{
    EXPECT_ANY_THROW(convert_to_arabic(validator, "m"));
}
}
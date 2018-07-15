#include <roman/RomanConverter.h>

#include <gtest/gtest.h>

namespace {

    using namespace roman::converter;

    TEST(ConverterTest, WhenEmptyShouldReturnZero) {
        EXPECT_EQ(convert_to_arabic(""), 0);
    }

    TEST(ConverterTest, WhenSingleIShouldReturn1) {
        EXPECT_EQ(convert_to_arabic("I"), 1);
    }

    TEST(ConverterTest, WhenSingleVShouldReturn5) {
        EXPECT_EQ(convert_to_arabic("V"), 5);
    }

    TEST(ConverterTest, WhenSingleXShouldReturn10) {
        EXPECT_EQ(convert_to_arabic("X"), 10);
    }

    TEST(ConverterTest, WhenSingleLShouldReturn50) {
        EXPECT_EQ(convert_to_arabic("L"), 50);
    }

    TEST(ConverterTest, WhenSingleCShouldReturn100) {
        EXPECT_EQ(convert_to_arabic("C"), 100);
    }

    TEST(ConverterTest, WhenSingleDShouldReturn500) {
        EXPECT_EQ(convert_to_arabic("D"), 500);
    }

    TEST(ConverterTest, WhenSingleMShouldReturn1000) {
        EXPECT_EQ(convert_to_arabic("M"), 1000);
    }

    TEST(ConverterTest, WhenSingleWrongCharacterShouldThrow) {
        EXPECT_ANY_THROW(convert_to_arabic("m"));
    }
}
set(TEST_FILES RomanConverterTest.cpp)

add_executable(converter_tests ${TEST_FILES})
add_dependencies(converter_tests roman_converter)

target_link_libraries(converter_tests
    roman_converter
    gtest_main
    gtest
    )

add_test(NAME test_converter_test COMMAND converter_tests)

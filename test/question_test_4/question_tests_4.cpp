#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE()
{
	REQUIRE(decimal_to_binary(10) == "00001010");
	REQUIRE(decimal_to_binary(170) == "10101010");
	REQUIRE(decimal_to_binary(255) == "11111111");
}
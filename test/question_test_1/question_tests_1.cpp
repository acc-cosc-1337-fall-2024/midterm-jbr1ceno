#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test get sales commission percentage")
{
	REQUIRE(get_sales_commission(100.0) == 5.0);
	REQUIRE(get_sales_commission(750.0) == 45.0);
	REQUIRE(get_sales_commission(1100.0) == 77.0); //WHAT IS GOING ON WITH THIS?!
	REQUIRE(get_sales_commission(1750.0) == 140.0); //this works too
	
}

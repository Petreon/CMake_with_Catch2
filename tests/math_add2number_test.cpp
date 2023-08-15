#include <catch2/catch_test_macros.hpp>
#include "mathslib.hpp"

TEST_CASE("math add2number function", "[math.add2number()]") {
    mathslib math_test;

    SECTION("adding numbers") {
        REQUIRE(math_test.add2numbers(2,3) == 5);
        REQUIRE(math_test.add2numbers(2500,1000) == 3500);
        REQUIRE(math_test.add2numbers(12000,9000) == 21000);
    }


}


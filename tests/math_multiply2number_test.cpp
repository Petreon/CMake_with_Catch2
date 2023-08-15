#include <catch2/catch_test_macros.hpp>
#include "mathslib.hpp"


TEST_CASE("math multiply2numbers function", "[math.multiply2numbers()]") {
    mathslib math_test;

    SECTION("multipling numbers") {
        REQUIRE(math_test.multply2numbers(2,6) == 12);
        REQUIRE(math_test.multply2numbers(100,20) == 2000);
    }
}
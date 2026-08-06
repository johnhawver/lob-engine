#include <catch2/catch_test_macros.hpp>
#include <lob/types.hpp>


TEST_CASE("Side values are distinct", "[types]") {
    REQUIRE(lob::Side::Bid != lob::Side::Ask);
  }

TEST_CASE("Order size", "[types]") {
    INFO("sizeof(Order) = " << sizeof(lob::Order));
    REQUIRE(true);
  }
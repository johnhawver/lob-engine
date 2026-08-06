#include <catch2/catch_test_macros.hpp>

// Smoke check that Catch2 is wired into lob_tests.
TEST_CASE("smoke: Catch2 is wired", "[smoke]") {
  REQUIRE(true);
}

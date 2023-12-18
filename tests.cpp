#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "Ingredient.h"

TEST_CASE("Ingredient - Constructor") {
  SECTION("Check initialization") {
    Ingredient ingredient("Rice", 200);

    REQUIRE(ingredient.getName() == "Rice");
    REQUIRE(ingredient.getQuantity() == 200);
  }

}


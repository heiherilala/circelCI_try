#include "RiceCooker.h"
#include "Ingredient.h"
#include "Menu.h"
#include "Validator.h"
#include <iostream>
#include <vector>

RiceCooker::RiceCooker() {
  // Initialize any necessary members in the constructor
}

void RiceCooker::prepareRecipe(std::string recipeChoice) {

  std::vector<Ingredient> ingredients;

  std::cout << "Preparing recipe...\n";

  std::cout << "Preparing " + recipeChoice + "...\n";

  int choice;

  do {
    Ingredient ingredientToAdd;
    ingredients.push_back(ingredientToAdd);
    std::cout << "Choose your action:\n";
    std::cout << "1. Add other ingredient \n";
    std::cout << "2. Strart\n";
    std::cout << "0. Cancel\n";

    choice = Validator::validateAndGetInt("Enter your choice: ");
  } while (choice == 1);

  if (choice == 2) {
    std::cout << "Recipe prepared successfully!\n";
    std::cout << "Ingredients used:\n";

    for (const auto &ingredient : ingredients) {
      std::cout << "- " << ingredient.getName() << ": "
                << ingredient.getQuantity() << " grams\n";
    }
  }

  ingredients.clear();
}

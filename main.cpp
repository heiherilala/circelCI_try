#include "Menu.h"
#include "RiceCooker.h"
#include <iostream>

int main() {
  RiceCooker riceCooker;
  int recipeChoice;

  do {
    recipeChoice = Menu::displayMainMenu();

    if (recipeChoice != -1) {
      switch (recipeChoice) {
      case 1:
        riceCooker.prepareRecipe("Rice");
      case 2:
        riceCooker.prepareRecipe("Hot water");
      case 3:
        riceCooker.prepareRecipe("Soup");
      default:
        std::cout << "Invalid choice. Please try again.\n";
      }
    }

  } while (recipeChoice != -1);

  return 0;
}

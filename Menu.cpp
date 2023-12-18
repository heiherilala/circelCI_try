#include "Menu.h"
#include "Validator.h"
#include <iostream>

int Menu::displayMainMenu() {
  int choice;

  do {
    std::cout << "Choose your action:\n";
    std::cout << "1. Rice\n";
    std::cout << "2. Hot water\n";
    std::cout << "3. Soup\n";
    std::cout << "0. Cancel\n";

    choice = Validator::validateAndGetInt("Enter your choice: ");

    switch (choice) {
    case 1:
    case 2:
    case 3:
      return choice;
    case 0:
      std::cout << "Operation canceled.\n";
      return -1;
    default:
      std::cout << "Invalid choice. Please try again.\n";
    }
  } while (true);
}

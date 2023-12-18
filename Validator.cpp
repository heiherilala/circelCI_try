#include "Validator.h"
#include <iostream>
#include <sstream>

int Validator::validateAndGetInt(const std::string &prompt) {
  std::string input;
  int value;

  do {
    std::cout << prompt;
    std::cin >> input;

    std::istringstream iss(input);
    if (iss >> value) {
      // Check if the value is non-negative
      if (value >= 0) {
        return value;
      } else {
        std::cout << "Please enter a non-negative value.\n";
      }
    } else {
      std::cout << "Invalid input. Please enter a valid number.\n";
    }
  } while (true);
}

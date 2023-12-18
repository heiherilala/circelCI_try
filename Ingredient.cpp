#include "Ingredient.h"
#include "Validator.h"
#include <iostream>

Ingredient::Ingredient() {
  std::cout << "Add one ingrédient :\n";
  std::cout << "Give ingrédient's name : ";
  std::cin >> name;
  quantity = Validator::validateAndGetInt("Add quantity (g) : ");
}

Ingredient::Ingredient(const std::string &name, int quantity)
    : name(name), quantity(quantity) {}

std::string Ingredient::getName() const { return name; }

int Ingredient::getQuantity() const { return quantity; }

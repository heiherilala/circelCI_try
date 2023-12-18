#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <string>

class Ingredient {
public:
  Ingredient(); // Déclaration du constructeur par défaut

  Ingredient(const std::string &name, int quantity);

  std::string getName() const;
  int getQuantity() const;

private:
  std::string name;
  int quantity;
};

#endif // INGREDIENT_H

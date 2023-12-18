#ifndef RICE_COOKER_H
#define RICE_COOKER_H

#include "Ingredient.h"
#include <string>
#include <vector>

class RiceCooker {
public:
  RiceCooker();

  void prepareRecipe(std::string recipeChoice);

private:
  std::vector<Ingredient> ingredients;
};

#endif // RICE_COOKER_H

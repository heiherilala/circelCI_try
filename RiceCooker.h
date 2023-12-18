#ifndef RICE_COOKER_H
#define RICE_COOKER_H

#include <string>
#include <vector>
#include "Ingredient.h"

class RiceCooker {
public:
    RiceCooker();

    void prepareRecipe(std::string recipeChoice);

private:
    std::vector<Ingredient> ingredients;

};

#endif // RICE_COOKER_H

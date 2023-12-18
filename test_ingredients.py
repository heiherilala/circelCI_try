import unittest
from ingredients import Ingredient


class TestIngredient(unittest.TestCase):
    def test_ingredient_creation(self):
        ingredient = Ingredient("Water", 500)
        self.assertEqual(ingredient.name, "Water")
        self.assertEqual(ingredient.quantity, 500)


if __name__ == "__main__":
    unittest.main()

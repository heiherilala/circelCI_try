import unittest

from cooker import Cooker
from ingredients import Ingredient


class TestCooker(unittest.TestCase):
    def test_cook(self):
        cooker = Cooker()
        cooker.ingredients = [Ingredient("Water", 500), Ingredient("Rice", 300)]
        self.assertEqual(cooker.ingredients[0].name, "Water")
        self.assertEqual(cooker.ingredients[1].name, "Rice")


if __name__ == "__main__":
    unittest.main()

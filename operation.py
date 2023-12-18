# operation.py
from ingredients import Ingredient
from validator import Validator


class Operation:
    @staticmethod
    def add_ingredient():
        ingredients = []
        while True:
            name = input("Enter the ingredient (e.g., water): ")
            quantity = Validator.validate_numeric_input("Enter the quantity in grams: ")
            ingredients.append(Ingredient(name, quantity))

            choice = input("1>->-> Add another ingredient\n2>->-> Finish and start cooking\n3>->-> Cancel\n")
            if choice == "2":
                return ingredients
            elif choice == "3":
                return None

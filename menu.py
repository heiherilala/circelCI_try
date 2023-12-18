# menu.py
from operation import Operation
from cooker import Cooker
from recipe import Recipe


class Menu:
    @staticmethod
    def main_menu():
        print("Choose your action:")
        print("1>->-> Rice")
        print("2>->-> Hot Water")
        print("3>->-> Soup")

        choice = input()
        if choice == "1":
            Menu.cook_menu(Recipe("Rice"))
        elif choice == "2":
            Menu.cook_menu(Recipe("Hot Water"))
        elif choice == "3":
            Menu.cook_menu(Recipe("Soup"))

    @staticmethod
    def cook_menu(recipe):
        print(f"{recipe.name} selected.")
        print("1>->-> Add ingredients")
        print("2>->-> Cancel")

        choice = input()
        if choice == "1":
            ingredients = Operation.add_ingredient()
            if ingredients:
                cooker = Cooker()
                cooker.ingredients = ingredients
                cooker.cook(recipe)
                # Clear operations and go back to the main menu
                Menu.main_menu()
        elif choice == "2":
            print("Operation canceled.")
            # Clear operations and go back to the main menu
            Menu.main_menu()

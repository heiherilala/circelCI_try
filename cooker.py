# cooker.py


class Cooker:
    def __init__(self):
        self.ingredients = []

    def cook(self, recipe):
        # Perform cooking logic here
        result = f"Recipe: {recipe}\nIngredients: {', '.join([f'{i.quantity}g {i.name}' for i in self.ingredients])}\n"
        print(result)

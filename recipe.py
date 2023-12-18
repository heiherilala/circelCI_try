# recipe.py


class Recipe:
    def __init__(self, name, temperature="automatic", duration="automatic"):
        self.name = name
        self.temperature = temperature
        self.duration = duration

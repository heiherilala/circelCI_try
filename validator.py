# validator.py


class Validator:
    @staticmethod
    def validate_numeric_input(prompt):
        while True:
            print(prompt)
            user_input = input()
            try:
                value = float(user_input)
                if value < 0:
                    raise ValueError("Please enter a non-negative value.")
                return value
            except ValueError:
                print("Invalid input. Please enter a valid non-negative number.")
                user_input = input()

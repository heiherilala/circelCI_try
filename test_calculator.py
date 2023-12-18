import unittest
from UtilsMethod import UtilsMethod


class TestCalculator(unittest.TestCase):
    def test_add(self):
        result = UtilsMethod.take_int_value_from_string("5")
        self.assertEqual(result, 5)


if __name__ == "__main__":
    unittest.main()

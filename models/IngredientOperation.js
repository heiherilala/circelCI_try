// models/IngredientOperation.js
const readlineSync = require('readline-sync')

class IngredientOperation {
  constructor() {
    this.ingredients = []
  }

  addIngredients(operationName) {
    console.log(`[${operationName}] Start adding ingredients:`)
    // eslint-disable-next-line no-constant-condition
    while (true) {
      const name = readlineSync.question('>->-> Ingredient (e.g., water): ')

      if (!name) {
        console.log('Invalid ingredient name. Please try again.')
        continue
      }

      const quantity = readlineSync.question('>->-> Quantity in grams: ')
      const numericQuantity = parseFloat(quantity)

      if (isNaN(numericQuantity) || numericQuantity < 0) {
        console.log('Invalid quantity. Please enter a non-negative number.')
        continue
      }

      this.ingredients.push({ name, quantity: numericQuantity })

      console.log('Ingredient added successfully.')

      const choice = readlineSync.keyInSelect(
        [
          'Add another ingredient',
          'Close the rice cooker and start cooking',
          'Cancel',
        ],
        '>->-> Choose an action: ',
      )

      if (choice === 0) {
        continue
      } else if (choice === 1) {
        break
      } else {
        this.cancel()
        break
      }
    }
  }

  getIngredients() {
    return this.ingredients
  }

  cancel() {
    this.ingredients = []
  }
}

module.exports = IngredientOperation

// models/RiceCooker.js
const IngredientOperation = require('./IngredientOperation')

class RiceCooker {
  constructor() {
    this.temperature = 'automatic'
    this.duration = 'automatic'
  }

  cookRice() {
    const operation = new IngredientOperation()
    operation.addIngredients('Cook Rice')
    this.showResult(operation)
  }

  boilWater() {
    const operation = new IngredientOperation()
    operation.addIngredients('Boil Water')
    this.showResult(operation)
  }

  makeSoup() {
    const operation = new IngredientOperation()
    operation.addIngredients('Make Soup')
    this.showResult(operation)
  }

  showResult(operation) {
    console.log('The dish is ready!')
    console.log('Ingredients used:', operation.getIngredients())
    console.log('Temperature:', this.temperature)
    console.log('Duration:', this.duration)

    this.cancel()
  }

  cancel() {
    this.temperature = 'automatic'
    this.duration = 'automatic'
  }
}

module.exports = RiceCooker

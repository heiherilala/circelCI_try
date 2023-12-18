/* eslint-disable no-undef */
const { expect } = require('chai')
const sinon = require('sinon')
const readlineSync = require('readline-sync')
const RiceCooker = require('../models/RiceCooker')
const IngredientOperation = require('../models/IngredientOperation')

// eslint-disable-next-line no-undef
describe('RiceCooker', () => {
  it('should create a new instance of RiceCooker', () => {
    const riceCooker = new RiceCooker()
    expect(riceCooker).to.be.an.instanceOf(RiceCooker)
  })

  it('should add ingredients for cooking rice', () => {
    const ingredientOperation = new IngredientOperation()

    sinon.stub(readlineSync, 'question').returns('Test Ingredient')
    sinon.stub(readlineSync, 'keyInSelect').returns(1)

    const ingredients = ingredientOperation.getIngredients()

    expect(ingredients.length).to.equal(0)

    ingredientOperation.ingredients = [{ name: 'Test Ingredient', quantity: 1 }]

    expect(ingredientOperation.getIngredients().length).to.equal(1)

    ingredientOperation.cancel()
    expect(ingredients.length).to.equal(0)
  })
  it('should cancel the cooking operation', () => {
    const riceCooker = new RiceCooker()

    expect(riceCooker.temperature).to.equal('automatic')
    expect(riceCooker.duration).to.equal('automatic')
  })
})

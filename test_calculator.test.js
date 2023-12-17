// test_calculator.js
const { expect } = require("chai");
const sinon = require('sinon');

describe("Calculator", () => {
  it("should add two numbers", () => {
    const result = 2 + 3;
    expect(result).to.equal(5);
  });
});

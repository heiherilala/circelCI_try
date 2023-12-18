# Rice Cooker Application

## Prerequisites
- C++ compiler with C++17 support
- Catch2 (for unit testing)

## Description

This C++ application simulates a rice cooker through a Command Line Interface (CLI). Users can choose from various recipes, add ingredients, and simulate the cooking process.

### Features
- Menu-driven interface for recipe selection
- Dynamic ingredient addition with quantity
- Recipe preparation simulation
- Error handling and user input validation

## Installation

1. Clone the repository:



## Execution

Build the application using CMake:

    cmake .

Run the application:

    ./rice_cooker_app

## Coding Standard (CS)

The code follows the LLVM coding standard to ensure consistency and maintainability. Please refer to the official LLVM Coding Standards documentation for more details.
Linter

The code is linted using ClangFormat to maintain a consistent coding style. It is recommended to run ClangFormat before committing changes to ensure the codebase's uniformity.
How to Run ClangFormat

Install ClangFormat:

    sudo apt-get install clang-format

Run ClangFormat on the entire codebase:

    clang-format -i $(find . -name '*.cpp' -or -name '*.h')

## Unit Testing

The application includes

unit tests using the Catch2 framework. To run the tests, use the following steps:

Run the tests:

    ./tests

The tests will verify the functionality of various components, including the RiceCooker and Validator classes.
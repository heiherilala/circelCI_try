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
2. Install clang-format:

    ex in apt-get:

        sudo apt-get install clang-format

You can adjust the installation command according to your package manager (apt-get, brew, etc.) if you're not using a Debian-based system.

3. Install clang-tidy:

    ex in apt-get:

        sudo apt-get install clang-tidy

## Execution

Build the application using scripte :

    ./build.ch

Run the application, after the buile you will have an executable "MonProgramme"

    ./MonProgramme

## Coding Standard (CS)

The code follows the LLVM coding standard to ensure consistency and maintainability. Please refer to the official LLVM Coding Standards documentation for more details.

## Linter

The code is linted using clang-tidy :

    clang-tidy *.cpp


## Format

Run ClangFormat on the entire codebase:

    clang-format -i $(find . -name '*.cpp' -or -name '*.h')

## Unit Testing

The application includes

unit tests using the Catch2 framework. To run the tests, you can directly use the script "test.sh"

    ./test.sh
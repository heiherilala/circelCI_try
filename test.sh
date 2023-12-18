#!/bin/bash

rm tests_app

c++ -c Validator.cpp Ingredient.cpp  Menu.cpp RiceCooker.cpp tests.cpp

echo "creatione  des fichiers .0 terminée."

c++ -o tests_app Validator.o Ingredient.o RiceCooker.o Menu.o tests.o

echo "creation de tests_app terminée"

rm *.o

echo "Suppression des fichiers .0 terminée."

rm *.h.gch

echo "Suppression des fichiers .h.gch terminée."

./tests_app
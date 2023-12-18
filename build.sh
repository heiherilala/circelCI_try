#!/bin/bash

c++ -c Validator.cpp Ingredient.cpp  Menu.cpp RiceCooker.cpp main.cpp

echo "creatione  des fichiers .0 terminée."

c++ -o MonProgramme Validator.o Ingredient.o RiceCooker.o Menu.o main.o
echo "creation de MonProgramme terminée"

rm *.o

echo "Suppression des fichiers .0 terminée."

rm *.h.gch

echo "Suppression des fichiers .h.gch terminée."
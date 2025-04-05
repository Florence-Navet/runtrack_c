/*
Vous devez implémenter la fonction swap (dans un fichier swap.c) qui prend
en paramètres deux pointeurs sur int, et qui doit échanger leurs valeurs.
*/
#include <stdio.h>

// fct swap prevant en valeur deux pointeurs et devant exhanger leur valeur

void swap (int *nombre1, int *nombre2) {
    int temp = *nombre1;
    *nombre1 = *nombre2;
    *nombre2 = temp;


}
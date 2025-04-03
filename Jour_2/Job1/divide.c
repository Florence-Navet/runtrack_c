/*
Implémenter la fonction divide (dans un fichier divide.c) qui va
prendre en paramètre un pointeur sur int, et qui devra diviser la valeur de l’int par 2.
*/

#include <stdio.h>

// fct divisant la valeur pointée par le pointeur par deux

void divide(int *pointeur) {
    if (pointeur != NULL) {
        *pointeur = *pointeur / 2; // divise la valeur pointée par 2
    }
}

// test fct

int main()
{
    int nombre = 10;

    printf("Avant la division : %d\n", nombre);

    //Appel de fct
    divide(&nombre);

    //affiche valeur après division
    printf("Après la division : %d\n", nombre);

    return 0;
}
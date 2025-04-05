/*
Vous devez implémenter la fonction swap (dans un fichier swap.c) qui prend
en paramètres deux pointeurs sur int, et qui doit échanger leurs valeurs.
*/
#include <stdio.h>
#include "swap.h"

int main(){
    int nombre1 = 12;
    int nombre2 = 25;

    // Déclaration des pointeurs
    int *ptr1 = &nombre1;
    int *ptr2 = &nombre2;

    printf("Avant l'échange : nombre1 = %d, nombre2 = %d\n", nombre1, nombre2);
    swap(ptr1, ptr2);
    printf("Après l'échange : nombre1 = %d, nombre2 = %d\n", nombre1, nombre2);

    return 0;
}
/*
main.c
*/

#include <stdio.h>
#include <string.h>
#include "array_clone.h"
#include <stdlib.h>



int main() {

// Tableau
char *tableau_initial[] = {
    "J'ai",
    "super",
    "mal",
    "au",
    "coude",
    "gauche.",
    NULL
};

    // Affichage du tableau original
    printf("Tableau original :\n");
    afficher_tableau(tableau_initial);

    // Clonage des 4 premiers éléments
    printf("\nClonage des 4 premiers éléments :\n");
    char **copie = array_clone(tableau_initial, 4);
    afficher_tableau(copie);

    // Libération de la mémoire
    for (int i = 0; copie[i] != NULL; i++) {
        free(copie[i]);
    }
    free(copie);

return 0;


}




#include <stdio.h>  // Pour printf, scanf
#include <stdlib.h> // Pour malloc et free
#include <string.h> // Pour strlen et strcpy 

int main() {
    char str[] = "Je m'appelle Kévin";
    
    // Allouer de la mémoire pour copier la chaîne str, incluant le caractère '\0'
    char *copy = (char *)malloc(strlen(str) + 1);

    // Vérification de l'allocation de mémoire
    if (copy == NULL) {
        printf("Erreur d'allocation de mémoire\n");
        return 1; // Sortir si l'allocation échoue
    }

    // Copier la chaîne dans l'espace mémoire alloué
    strcpy(copy, str);

    // Afficher la chaîne copiée
    printf("Chaîne copiée : %s\n", copy);

    // Libérer la mémoire allouée
    free(copy);

    return 0;
}

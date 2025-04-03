#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// Fonction trim : enlève les espaces en début et fin de chaîne
char *trim(const char *chaine) {
    if (chaine == NULL) {
        return NULL; // Vérifie si la chaîne est NULL
    }

    // Trouver le début sans espace
    while (*chaine && isspace((unsigned char)*chaine)) {
        chaine++;
    }

    // Si la chaîne est constituée uniquement d'espaces
    if (*chaine == '\0') {
        return strdup(""); // Retourne une chaîne vide
    }

    // Trouver la fin sans espace
    const char *end = chaine + strlen(chaine) - 1;
    while (end > chaine && isspace((unsigned char)*end)) {
        end--;
    }

    // Calcul de la longueur de la nouvelle chaîne
    int longueur = end - chaine + 1;

    // Allocation mémoire pour la nouvelle chaîne
    char *nouvelle_chaine = (char *)malloc(longueur + 1); // +1 pour '\0'
    if (nouvelle_chaine == NULL) {
        // Si l'allocation échoue, retourner 0 ou NULL
        fprintf(stderr, "Erreur d'allocation mémoire.\n");
        return NULL;  // Ou retourner 0, selon le besoin
    }

    // Copie la partie utile de la chaîne sans les espaces
    strncpy(nouvelle_chaine, chaine, longueur);
    nouvelle_chaine[longueur] = '\0'; // Ajout du caractère nul à la fin

    return nouvelle_chaine; // Retourne la nouvelle chaîne sans espaces
}

int main() {
    const char *str = "   \t  Exemple de texte avec des espaces.  \n  ";

    // Appel à la fonction trim pour enlever les espaces
    char *trimmed_str = trim(str);

    // Vérifie si la mémoire a bien été allouée
    if (trimmed_str != NULL) {
        printf("La mémoire a bien été allouée.\n");
        printf("Chaîne après trim: \"%s\"\n", trimmed_str);  // Affichage de la chaîne sans les espaces
        free(trimmed_str);  // Libère la mémoire allouée
    } else {
        printf("Erreur d'allocation mémoire.\n");
    }

    return 0;
}
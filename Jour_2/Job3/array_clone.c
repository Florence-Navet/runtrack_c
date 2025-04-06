/*
Vous devez implémenter la fonction array_clone (dans un fichier
array_clone.c) qui doit prendre en paramètre un tableau de chaînes de
caractères, et un int n. Elle devra renvoyer un tableau de chaîne de
caractères qui contient des copies des chaînes de caractères du tableau
entrant, jusqu’à la nième, ou jusqu’au premier pointeur NULL présent. Le
tableau sortant devra se terminer par un pointeur NULL.
*/
/*
Objectif de la fonction array_clone
Tu dois créer une fonction qui prend deux paramètres :

Un tableau de chaînes de caractères (char *[]) – autrement dit, un tableau de char*, où chaque élément pointe vers une chaîne comme "bonjour" ou "test".

Un entier n, qui sert de limite maximale au nombre de chaînes à copier.

Ce que la fonction doit faire :
Parcourir le tableau de chaînes de caractères à partir du début.

Copier chaque chaîne de caractères une à une (et non juste recopier les pointeurs).

S’arrêter au bout de n chaînes ou dès qu’elle rencontre un pointeur NULL (ce qui signifie la fin logique du tableau d’origine).

Créer un nouveau tableau, qui contient ces copies, et qui se termine lui aussi par un pointeur NULL (comme c’est la convention pour ce type de tableau).

Pourquoi ce n’est pas juste une copie simple ?
Parce que tu dois dupliquer les chaînes – c’est-à-dire allouer un nouvel espace mémoire pour chaque chaîne copiée. On ne veut pas juste copier les pointeurs (sinon les deux tableaux pointent vers les mêmes chaînes), on veut de véritables clones indépendants.

En résumé
Tu crées un nouveau tableau contenant :

Jusqu’à n copies de chaînes depuis un tableau donné.

Ou tu t’arrêtes plus tôt si tu rencontres un NULL.

Et tu ajoutes un NULL à la fin du nouveau tableau pour marquer la fin.

*/
//TODO implentation tableau array vide avec NULL à la fin avec une boucle
// incrementation tableau pour exemple
//char *tableau_initial[] = ["Salut", "je", "m'appelle", "Kévin", "et", "je", "suis", "d'Aix", NULL];


/*
array_clone.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//fonction pour afficher tableau de chaine de caractere
void afficher_tableau(char **tableau) {
    int i = 0;
    while(tableau[i] != NULL){
        printf("Mot %d : %s\n", i, tableau[i]);
        i++;
    }
} 

char **array_clone(char **array, int nombre) {
    if (array == NULL) {
        return NULL;
    }

    char **nouveau_tableau = malloc((nombre + 1) * sizeof(char *));
    if (nouveau_tableau == NULL) {
        return NULL;
    }

    int i;
    for (i = 0; i < nombre; i++) {
        if (array[i] == NULL) {
            break;
        }
        nouveau_tableau[i] = strdup(array[i]);
        if (nouveau_tableau[i] == NULL) {
            // Libération de la mémoire en cas d'échec
            for (int j = 0; j < i; j++) {
                free(nouveau_tableau[j]);
            }
            free(nouveau_tableau);
            return NULL;
        }
    }

    nouveau_tableau[i] = NULL;
    return nouveau_tableau;
}

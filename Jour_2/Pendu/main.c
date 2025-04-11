#include <stdio.h>
#include <stdlib.h>  // Pour malloc et free
#include <ctype.h>
#include "main.h"
#include "utils.h"

int *lettreTrouvee = NULL;

int main(int argc, char* argv[])
{
    (void)argc;
    (void)argv;   
//     char lettre = 0;  // Stocke la lettre proposée par l'utilisateur (retour du scanf)
    char motSecret[] = "ROUGE";  // C'est le mot à trouver
//     int coupsRestants = 10;  // Compteur de coups restants (0 = mort)
    
    // Calcul de la taille du mot
    int taille = tailleMot(motSecret);
    
    // Allocation de la mémoire pour le tableau lettreTrouvee
    lettreTrouvee = malloc(taille * sizeof(int));
    
    // Initialisation du tableau lettreTrouvee à 0 (aucune lettre trouvée au départ)
    initTableau(lettreTrouvee, taille);
    
    // Affichage des valeurs dans lettreTrouvee pour vérifier que c'est bien initialisé
    printf("Tableau des lettres trouvées : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", lettreTrouvee[i]);
    }
    printf("\n");

    //appel fct gagné
    if (gagne(lettreTrouvee, taille))
    {
        printf("Félicitation ! Vous avez trouvé le mot secret !!\n");
    }else
    {
        printf("Il vous reste encore des lettres. Poursuivez ! \n");
    }
    

    // Libération de la mémoire allouée à lettreTrouvee
    free(lettreTrouvee);
    
    return 0;
}

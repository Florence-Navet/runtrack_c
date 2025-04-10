#include "main.h"

// Fonction qui retourne la taille du mot
int tailleMot(char motSecret[]) {
    int nombreLettres = 0;
    for(int i = 0; motSecret[i] != '\0'; i++) {
        nombreLettres++;
    }
    return nombreLettres;
}

// Fonction qui initialise toutes les cases du tableau lettreTrouvee à 0
void initTableau(int *lettreTrouvee, int taille) {
    for (int i = 0; i < taille; i++) {
        lettreTrouvee[i] = 0;  // Init à 0
    }
}

int gagne(int *lettreTrouvee, int nombreLettres)
{
    int i = 0;
    int joueurGagne = 1;  // On suppose que le joueur a gagné

    for (i = 0; i < nombreLettres; i++)
    {
        if (lettreTrouvee[i] == 0)  // Si une lettre n'est pas trouvée
        {
            joueurGagne = 0;  // Le joueur n'a pas encore gagné
            break;  // On arrête la boucle ici, pas besoin de continuer à vérifier
        }
    }

    return joueurGagne;  // Retourne 1 si gagné, 0 si non
}

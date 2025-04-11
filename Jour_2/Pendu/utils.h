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




/*
while (coupsRestants > 0 && !gagne(lettreTrouvee, nombreLettres)) {
    char lettre = 0;

    printf("Proposez une lettre : ");
    scanf(" %c", &lettre);  // attention à l’espace avant %c pour ignorer les retours à la ligne précédents

    // Vérifier si la lettre est dans le mot
    int bonneLettre = 0;
    for (int i = 0; i < nombreLettres; i++) {
        if (motMystere[i] == lettre) {
            lettreTrouvee[i] = lettre;
            bonneLettre = 1;
        }
    }

    if (!bonneLettre) {
        coupsRestants--;
        printf("Lettre incorrecte ! Il vous reste %d coups.\n", coupsRestants);
    } else {
        printf("Bien joué !\n");
    }

    // Affichage de l'état actuel du mot
    printf("Mot à deviner : ");
    for (int i = 0; i < nombreLettres; i++) {
        printf("%c ", lettreTrouvee[i]);
    }
    printf("\n");
}

//TOTo à mettre dans main
if (gagne(lettreTrouvee, nombreLettres)) {
    printf("Félicitations, vous avez trouvé le mot !\n");
} else {
    printf("Dommage, vous avez perdu. Le mot était : %s\n", motMystere);
}



*/
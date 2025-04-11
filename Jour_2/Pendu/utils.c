#include <stdio.h>  // pour getchar()
#include <ctype.h>  // pour toupper()
#include "utils.h"



// Fonction qui retourne la taille du mot
int tailleMot(char motSecret[]) {
    int nombreLettres = 0;
    for(int i = 0; motSecret[i] != '\0'; i++) {
        nombreLettres++;
    }
    return nombreLettres;
}

// Fonction qui initialise toutes les cases du tableau lettreTrouvee 
void initTableau(int *lettreTrouvee, int taille) {
    for (int i = 0; i < taille; i++) {
        lettreTrouvee[i] = 0;  // Init à 0
    }
}

//determine si le joueur a gagné
int gagne(int *lettreTrouvee, int nombreLettres){
    for (int i=0; i < nombreLettres; i++) {
        if(lettreTrouvee[i] == 0) {
            return 0;
        }
    }
    return 1;
}

// fct pour lire un caractere et le mettre en majuscule
char lireCaractere()
{

    char caractere = getchar();               // On lit le premier caractère
    caractere = toupper(caractere);      // On met la lettre en majuscule si besoin

    while (getchar() != '\n');           // On vide le buffer

    return caractere;
}

int rechercheLettre(char lettre, char *motSecret, int *LettreTrouvee) {
    int trouve = 0;
    for (int i = 0; motSecret[i] != '\0'; i++) {
        if(motSecret[i] == lettre && LettreTrouvee [i == 0]) {
            LettreTrouvee[i] = 1;
            trouve = 1;
        }
    }
    return trouve;
}





/*
utils.c*/

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

// Détermine si le joueur a gagné
int gagne(int *lettreTrouvee, int nombreLettres){
    for (int i = 0; i < nombreLettres; i++) {
        if(lettreTrouvee[i] == 0) {
            return 0;
        }
    }
    return 1;
}

// Fonction pour lire un caractère et le mettre en majuscule
char lireCaractere()
{
    char caractere = getchar();               // On lit le premier caractère
    caractere = toupper(caractere);           // On met la lettre en majuscule si besoin

    while (getchar() != '\n');                // On vide le buffer

    return caractere;
}

// Recherche la lettre dans le mot secret et met à jour le tableau lettreTrouvee
int rechercheLettre(char lettre, char *motSecret, int *lettreTrouvee) {
    int trouve = 0;
    for (int i = 0; motSecret[i] != '\0'; i++) {
        if(motSecret[i] == lettre && lettreTrouvee[i] == 0) {
            lettreTrouvee[i] = 1;
            trouve = 1;
        }
    }
    return trouve;
}




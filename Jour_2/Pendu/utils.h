/*
utils.h
*/

#ifndef UTILS_H
#define UTILS_H

int tailleMot(char motSecret[]);
void initTableau(int *lettreTrouvee, int taille);
int gagne(int *lettreTrouvee, int nombreLettres);
int rechercheLettre(char lettre, char *motSecret, int *lettreTrouvee);
char lireCaractere(void);

#endif

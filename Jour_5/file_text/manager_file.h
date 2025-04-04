#ifndef MANAGER_FILE_H
#define MANAGER_FILE_H

// Définition de la structure Anime
struct Anime {
    char nom[100];
    char titre[100];
    int annee; 
}; 

// Déclaration de la fonction d'affichage
void afficher_anime(struct Anime a);

void enregistrer_anime(char *mon_file, struct Anime a);


#endif


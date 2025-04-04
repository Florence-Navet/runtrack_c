#include <stdio.h>
#include "manager_file.h"

//creation d'un alias
typedef struct Anime Anime;

// Fonction qui affiche les infos de la personne
void afficher_anime(struct Anime a) {
    printf("\nInformations sur l'anime:\n");
    printf("Nom: %s\n", a.nom);
    printf("Titre: %s\n", a.titre);
    printf("Année: %d\n", a.annee);
}


void enregistrer_anime(char *mon_file, struct Anime a) {
    // On ouvre le fichier en mode append (ajout à la fin)
    FILE *fichier_append = fopen(mon_file, "a");
    if (fichier_append == NULL) {
        printf("Erreur lors de l'ouverture en mode ajout.\n");
    }
    fprintf(fichier_append, "%s, %s, %d\n", a.nom, a.titre, a.annee);
    fclose(fichier_append);   
}

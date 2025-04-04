#include "manager_file .h"

//creation d'un alias
typedef struct Anime Anime;

// Fonction qui affiche les infos de la personne
void afficher_anime(struct Anime a) {
    printf("\nInformations sur l'anime:\n");
    printf("Nom: %s\n", a.nom);
    printf("Titre: %s\n", a.titre);
    printf("Année: %s\n", a.annee);
}

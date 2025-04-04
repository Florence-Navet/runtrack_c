#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "manager_file.h"  // Inclure le fichier d'en-tête uniquement

#define MAX_ANIME 100

// Fonction de comparaison par titre
int compare_par_titre(const void *a, const void *b) {
    struct Anime *animeA = (struct Anime *)a;
    struct Anime *animeB = (struct Anime *)b;
    return strcmp(animeA->titre, animeB->titre);
}

// Fonction de comparaison par nom
int compare_par_nom(const void *a, const void *b) {
    struct Anime *animeA = (struct Anime *)a;
    struct Anime *animeB = (struct Anime *)b;
    return strcmp(animeA->nom, animeB->nom);
}

// Fonction de comparaison par année
int compare_par_annee(const void *a, const void *b) {
    struct Anime *animeA = (struct Anime *)a;
    struct Anime *animeB = (struct Anime *)b;
    return animeA->annee - animeB->annee;
}

// Fonction d'affichage des animes
void affichage_animes(struct Anime *animes, int n) {
    for (int i = 0; i < n; i++) {
        printf("\"%s\" by \"%s\" released in %d.\n",
               animes[i].titre, animes[i].nom, animes[i].annee);
    }
}

int main() {
    struct Anime tableauAnime[MAX_ANIME]; // tableau de 100 anime max
    int nbAnime = 0;

    // Lecture du fichier existant
    FILE *fichier = fopen("manga.txt", "r");
    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return 1; 
    }

    char ligne[256];  // Pour stocker chaque ligne lue
    char *nom, *titre, *annee_str;
    int annee_int;

    printf("\nContenu actuel du fichier :\n");

    // Lecture ligne par ligne du fichier
    while (fgets(ligne, sizeof(ligne), fichier) && nbAnime < MAX_ANIME) {
        ligne[strcspn(ligne, "\n")] = '\0'; // Supprimer le retour à la ligne

        nom = strtok(ligne, ",");
        titre = strtok(NULL, ",");
        annee_str = strtok(NULL, ",");

        if (nom && titre && annee_str) {
            // Supprimer les espaces au début et à la fin des chaînes
            while (*titre == ' ') titre++;
            while (*annee_str == ' ') annee_str++;

            annee_int = atoi(annee_str);

            // Remplir le tableau d'animes
            strcpy(tableauAnime[nbAnime].nom, nom);
            strcpy(tableauAnime[nbAnime].titre, titre);
            tableauAnime[nbAnime].annee = annee_int;

            nbAnime++;
        }
    }

    fclose(fichier);

    // Affichage avant le tri
    printf("Before sorting:\n");
    affichage_animes(tableauAnime, nbAnime);

    // Tri par titre
    qsort(tableauAnime, nbAnime, sizeof(struct Anime), compare_par_titre);

    // Affichage après le tri
    printf("\nAfter sorting by title:\n");
    affichage_animes(tableauAnime, nbAnime);

    // Exemple d'anime à enregistrer
    enregistrer_anime("save_manga.txt", tableauAnime[1]);
    printf("\nAnime ajouté au fichier avec succès !\n");

    return 0;
}

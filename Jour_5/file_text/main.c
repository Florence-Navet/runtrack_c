/*
Vous devez créer un programme qui prend en arguments le nom d’un fichier texte, et “artist”, “title”, ou “year”.

Le programme devra ouvrir le fichier texte, le lire, l’interpréter et l’enregistrer
en liste chaînée. Il devra ensuite le trier selon l’ordre indiqué dans le deuxième
argument, afficher toute la liste sur la sortie standard au même format que
dans le Jour04.

Le fichier texte sera présenté au format suivant :
Iron Maiden,The Number of the Beast,1982
Black Sabbath,Paranoid,1970
Iron Maiden,Fear of the Dark,1992
Rappel du format de sortie :
“Master of Puppets” by “Metallica” released in 1986.
Fonctions autorisées : open, close, read, write, malloc, free.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//#include "main.h"
#include "manager_file.h"
typedef struct Anime Anime;
/*
//creation d'un alias
// Fonction qui affiche les infos de la personne
void afficher_anime(Anime a) {
    printf("\nInformations sur l'anime:\n");
    printf("Nom: %s", a.nom);
    printf("Titre: %s", a.titre);
    printf("Année: %s", a.annee);
}
*/
// Définition de la structure Anime
// struct Anime {
//     char nom[100];
//     char titre[100];
//     int annee; 
// }; 

#define MAX_ANIME 100
int main() {

    // Création d'un anime
    // Anime x = {
    //     "Anya",
    //     "SpyXFamily",
    //     2025
    // };

    // afficher_anime(x);

    Anime tableauAnime[MAX_ANIME]; // tableau de 100 anime max
    int nbAnime = 0;
    
    // Lecture du fichier existant
    FILE *fichier = fopen("manga.txt", "r");
    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return 1; 
    }

    char ligne[256];  // Pour stocker chaque ligne lue
    char *nom;
    char *titre;
    char *annee_str;
    int annee_int;

    printf("\nContenu actuel du fichier :\n");

    while (fgets(ligne, sizeof(ligne), fichier) && nbAnime < MAX_ANIME) {
        ligne[strcspn(ligne, "\n")] = '\0'; // supprime le retour à la ligne
    
        nom = strtok(ligne, ",");
        titre = strtok(NULL, ",");
        annee_str = strtok(NULL, ",");
    
        if (nom && titre && annee_str) {
            while (*titre == ' ') titre++;
            while (*annee_str == ' ') annee_str++;
    
            annee_int = atoi(annee_str);
    
            strcpy(tableauAnime[nbAnime].nom, nom);
            strcpy(tableauAnime[nbAnime].titre, titre);
            tableauAnime[nbAnime].annee = annee_int;
    
            nbAnime++;
        }
    }
    
    // devoir faire un tableau de structure anime tab[struct Anime]
    fclose(fichier);

    // Affichage du tableau
    printf("\nListe des animes dans le tableau :\n");
    for (int i = 0; i < nbAnime; i++) {
        printf("\"%s\" by \"%s\" released in %d.\n",
            tableauAnime[i].titre,
            tableauAnime[i].nom,
            tableauAnime[i].annee);
    }

    // Anime x = {"Anya", "SpyXFamily", 2025}; // Exemple d'anime à enregistrer
    enregistrer_anime("save_manga.txt", tableauAnime[1]);
    //enregistrer_anime("save_manga.txt", 10);
    printf("\nAnime ajouté au fichier avec succès !\n");

    return 0;
}

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

int main() {
   
    FILE *fichier = fopen("manga.txt", "r+");

    if (fichier == NULL) {
        
        printf("Erreur lors de l'ouverture du fichier.\n");
        return 1; 
    }

    // Si le fichier est ouvert avec succès, on le lit ligne par ligne
    char ligne[256];  // Tableau pour stocker chaque ligne lue
    while (fgets(ligne, sizeof(ligne), fichier)) {
    
        printf("%s", ligne);
    }


    fclose(fichier);

    return 0;
}
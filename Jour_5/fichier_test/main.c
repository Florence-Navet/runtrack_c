/*
creation d'un fichier txt
*/

#include <stdio.h>

int main(int argc, char* argv[]) 
{
    FILE* fichier = NULL;

    // Ouverture du fichier en mode "r+" pour lecture et écriture
    fichier = fopen("test.txt", "r+");

    if (fichier != NULL)
    {
        // Le fichier est ouvert avec succès
        printf("Le fichier a été ouvert avec succès.\n");

        // Ajouter du texte dans le fichier
        fputs("Salut les développeurs\nBienvenue sur OpenClassrooms !", fichier);

        // Toujours fermer le fichier après utilisation
        fclose(fichier);
    }
    else
    {
        // Affiche un message d'erreur si le fichier ne peut pas être ouvert
        printf("Impossible d'ouvrir le fichier test.txt\n");
    }

    return 0;
}

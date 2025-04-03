/*
creation d'un fichier txt
*/

#include <stdio.h>

int main(int argc, char* argv[]) 
{
    FILE* fichier = NULL;

    // Ouverture du fichier en mode "r+" pour lecture et écriture
    fichier = fopen("test.txt", "r+");
    int age; //declaration variable age

    if (fichier != NULL)
    {
        // Le fichier est ouvert avec succès
        printf("Le fichier a été ouvert avec succès.\n");

        // Ajouter du texte dans le fichier
        fputs("Salut les développeurs\nBienvenue sur OpenClassrooms !\n", fichier);

        printf("Quel age avez-vous ?");
        scanf("%d", &age);

        //On l"ecrit dans le fichier
        fprintf(fichier, "Le monsieur qui bosse avec avec nous a %d ans\n", age);

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

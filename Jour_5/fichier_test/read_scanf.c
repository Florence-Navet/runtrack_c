/*
lecture chaine formatée avec scanf
*/

#include <stdio.h>



int main(int argc, char *argv[])
{
    FILE* fichier = NULL;
    int score[3] = {0}; // Tableau des 3 meilleurs scores
 
    fichier = fopen("test.txt", "r");
 
    if (fichier != NULL)
    {
        fscanf(fichier, "%d %d %d", &score[0], &score[1], &score[2]);
        printf("Les meilleurs scores sont : %d, %d et %d", score[0], score[1], score[2]);
 
        fclose(fichier);
    }
 
    return 0;
}
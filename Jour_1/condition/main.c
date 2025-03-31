//main.c

#include <stdio.h>
#include <stdlib.h>

/*

int main()
{
    int volume = 100;

    if (volume == 0)
    {
        printf("Le volume est nul : \n");
    }
    else if (volume <= 70)
    {
        printf("Le volume est correct. \n");
    }
    else
    {
        printf("Le volume est trop fort.\n");
    }

    return 0;
}
*/

#include <stdio.h>

int main()
{
    int age, argent;

    // Demander les valeurs à l'utilisateur
    printf("Entrez votre âge : ");
    scanf("%d", &age);

    printf("Entrez votre montant d'argent : ");
    scanf("%d", &argent);

    // Vérification des conditions
    if (age > 30 || argent > 100000)
    {
        printf("Bienvenue chez PicsouBanque !\n");
    }
    else
    {
        printf("Hors de ma vue, miserable !\n");
    }

    return 0; // Retour propre du programme
}


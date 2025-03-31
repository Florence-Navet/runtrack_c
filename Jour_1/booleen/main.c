#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age; // Déclaration de la variable

    printf("Quel est ton âge ? "); // Demande à l'utilisateur
    scanf("%d", &age); // Récupère l'entrée utilisateur

    switch (age)
    {
        case 2:
            printf("Salut bébé !\n");
            break;
        case 6:
            printf("Salut gamin !\n");
            break;
        case 12:
            printf("Salut jeune !\n");
            break;
        case 16:
            printf("Salut ado !\n");
            break;
        case 18:
            printf("Salut adulte !\n");
            break;
        case 68:
            printf("Salut papy !\n");
            break;
        default:
            printf("Je n'ai aucune réponse pour ton âge.\n");
            break;
    }

    return 0; // Bonne pratique
}

/*
Recherchez une chaîne dans une autre avec strstr
*/
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *suiteChaine;

    // Cherche la première occurrence de "Je travaille"
    suiteChaine = strstr("Je travaille sur un nouveau language.", "Il bosse");
    
    if (suiteChaine != NULL)
    {
        printf("Première occurrence trouvée : %s\n", suiteChaine);
    }
    else
    {
        printf("La sous-chaîne recherchée n'a pas été trouvée.\n");
    }

    return 0;
}

//utiliser char pour manipuler une chaine de caractere

#include <stdio.h>

int main(int argc, const char * argv[])
{
    char lettre = 0;
    printf("Entrez une lettre : ");
    scanf(" %c", &lettre);
    printf(" %c\n", lettre);
    printf("Vous avez entré: %c\n", lettre);

    return 0;
}
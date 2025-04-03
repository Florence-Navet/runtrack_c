/*
Verifiions si deux chaines sont identiques
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv [])
{
    char chaine1[] = "Je suis à Aix", chaine2[] = "Je suis en Chine";

    if (strcmp(chaine1, chaine2) == 0) // si chaine identiques
    {
        printf("Les chaines sont identiques.\n");
    }
    else
    {
        printf("Les chaines sont différentes.\n");
    }

    return 0;

}
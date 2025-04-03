/*
Verifiions si deux chaines sont identiques
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    char *suiteChaine;

    //cherchons premiere occurence de s, A ou j
    
    suiteChaine = strpbrk("Je suis chez Kevin", "scK");

    if (suiteChaine != NULL)
    {
        printf("Voici la fin de la chaine à partir des premiers caractères trouvés : %s", suiteChaine);
    }

    return 0;
}
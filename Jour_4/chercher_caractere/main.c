/*
La fonction strchr recherche un caractère dans une chaîne.
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    char chaine[] = "Coucou, je bosse", *suitechaine = NULL;

    suitechaine = strchr(chaine, 'j');
    if(suitechaine != NULL); // si on a trouvé un truc
    {
        printf("Voici la fin de chaine à partir du premier j: %s", suitechaine);

        return 0;
    }
}
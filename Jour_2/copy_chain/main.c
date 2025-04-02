//copie chaine à l'interieur d'une autre

#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    /*On cree une chaine avec un peu txt et une copie vide de taille 100 poru être sûr d'avoir la place de la copie
    */

    char chaine[] = "Saya", copie[100] = {0};

    strcpy(copie, chaine); //on copie "chaine" dans "copie"

    //normalement copie doit être identique à chaine

    printf("Chaine vaut : %s\n", chaine);
    printf("Copie vaut : %s\n", copie);

    return 0;

}
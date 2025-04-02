// copie de la chaine de caractère

#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    /*creation chaine avec texte et une copie vide de taille 100 pour être sûr d'avoir la place de la copie*/

    char chaine[] = "Nouveau language de programmation", copie[100] = {0};

    strcpy(copie, chaine); // on copie chaine dans "copie"

    //normaelemnt copie doit etre id à chain

    printf("Chaine vaut : %s\n", chaine);
    printf("Copie vaut : %s\n", copie);

    return 0;
}
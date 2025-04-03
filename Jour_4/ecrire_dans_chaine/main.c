/*
Recherchez une chaîne dans une autre avec strstr
*/
#include <stdio.h>

int main (int argc, char *argv[])
{
    char chaine[100];
    int age = 15;

    //on ecrit "Tu as 15 ans" dans une chaine
    sprintf(chaine, "Tu as %d ans !", age);

    //on affiche chaine pour vérifier qu'elle contient cela

    printf("%s", chaine);

    return 0;
}
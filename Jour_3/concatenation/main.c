//concatenation

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    /*creer deux chaines :
    chaine 1 assez grande pour accueillir le contenu de la chaine 2 sinon risque de plantage*/

    char chaine1[100] = "Je suis à AIx avec Kévin.", chaine2[] = "Je reste jusqu'à samedi.";

    strcat(chaine1, chaine2); //on concatene chaine 2 dans chaine 1

    //Si tout t'est ok, chaine  1 et chaine 2 ont concaténé
    printf("Chaine1 vaut : %s\n", chaine1);

    //chaine2 n'a pas changé :
    printf("Chaine2 vaut : %s\n", chaine2);

    return 0;

}
//utiliser char pour manipuler une chaine de caractere

#include <stdio.h>

int main(int argc, const char * argv[])
/*
{   
    char chaine [6]; // tableau de 6 pour stocker les 6 éléments avec \0

    //initialisation de la chaine
    chaine [0] = 'h';
    chaine [1] = 'e';
    chaine [2] = 'l';
    chaine [3] = 'l';
    chaine [4] = 'o';
    chaine [5] = '\0';

    //affichage de la chaine grâce au %s du printf
    printf("%s\n", chaine);

    return 0;

       
}
*/
/*
{
    char chaine[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

    printf("%s", chaine);
}
*/


{
    char chaine[] = "Je suis chez Kévin !!!";// taille automatiquement calculée

   
    chaine[20] = '?'; //onmodifie un caractere

    printf("%s", chaine);

    return 0;
}    

//tableau de float

#include <stdio.h>

int main(int argc, char * argv[]){

    int tableau[4], i=0;
    //initialisation du tableau
    for (i = 0; i < 4; i++) 
    {
        tableau[i] = 0;
    }

    //affichage de ses valeurs pour vérifier
    for (i = 0 ; i < 4; i ++)
    {
        print("%d\n", tableau[i]);
    }

    return 0;
}
//tableau de float

#include <stdio.h>

//protype de la fonction d'affichage
void affiche (int *tableau, int tailleTableau);

int main(int argc, char * argv[])
{

    int tableau[4] = {10, 15, 16, 28};

    //ion affiche le tableau
    affiche(tableau, 4);
    

    return 0;
}

void affiche(int *tableau, int taileTableau)
{
    int i;
    for (i = 0; i < taileTableau; i++)
    {
        printf("%d\n", tableau[i]);
    }
}

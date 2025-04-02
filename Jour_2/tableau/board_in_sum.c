#include <stdio.h>

// Fonction qui calcule la somme des éléments d'un tableau
int sommeTableau(int tableau[], int tailleTableau)
{
    int somme = 0;
    for(int i = 0; i < tailleTableau; i++)  // Correction du ";" et de la ","
    {
        somme += tableau[i];
    }
    return somme;  // Correction : le return doit être en dehors de la boucle
}

int main(int argc, const char * argv[])
{
    int Tableau[5] = {1, 8, 16, 100, 5};

    // Appel de la fonction et affichage du résultat
    int resultat = sommeTableau(Tableau, 5);
    printf("La somme du tableau est : %d\n", resultat);

    return 0;
}

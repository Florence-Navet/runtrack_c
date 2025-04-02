#include <stdio.h>

// Fonction qui calcule la somme des éléments d'un tableau
double moyenneTableau(int tableau[], int tailleTableau)
{
    int somme = 0;
    for(int i = 0; i < tailleTableau; i++)  // Correction du ";" et de la ","
    {
        somme += tableau[i];
    }
    return (double)somme / (double)tailleTableau;  
}

int main(int argc, const char * argv[])
{
    int Tableau[5] = {1, 8, 16, 100, 5};

    // Appel de la fonction et affichage du résultat
    double resultat = moyenneTableau(Tableau, 5);
    printf("La moyenne du tableau est : %f\n", resultat);

    return 0;
}

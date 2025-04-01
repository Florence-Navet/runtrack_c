#include <stdio.h>
#include <stdlib.h>

// Fonction qui retourne le triple d'un nombre
int triple(int nombre) {
    int resultat = 0;
    resultat = 3 * nombre;  // On multiplie le nombre fourni par 3
    return resultat;        // On retourne le résultat
}

int addition(int a, int b)
{
    return a + b;
}

int main() {
    int nombre = 5;  // Exemple de nombre
    int a = 10, b = 7;
    int resultat_triple = triple(nombre);  // On appelle la fonction triple()

    int resultat_addition = addition(a, b);  // Calcul de l'addition

    // Affichage des résultats
    printf("Le triple de %d est %d\n", nombre, resultat_triple);
    printf("La somme de %d et %d est %d\n", a, b, resultat_addition);

    return 0;  // Fin du programme
}

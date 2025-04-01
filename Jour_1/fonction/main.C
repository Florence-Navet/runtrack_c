#include <stdio.h>
#include <stdlib.h>

// Fonction qui retourne le triple d'un nombre
int triple(int nombre) {
    return 3 * nombre;  // Retourne le triple du nombre
}

// Fonction qui additionne deux nombres
int addition(int nombre_a, int nombre_b) {
    return nombre_a + nombre_b;  // Retourne la somme
}

int main() {
    int nombre = 5;  // Nombre à tripler
    int nombre_a, nombre_b;  // Variables pour l'addition

    // Demande à l'utilisateur d'entrer deux nombres
    printf("Entrez un nombre a : ");
    scanf("%d", &nombre_a);  

    printf("Entrez un nombre b : ");
    scanf("%d", &nombre_b);  

    // Calculs après avoir récupéré les valeurs
    int resultat_triple = triple(nombre);
    int resultat_addition = addition(nombre_a, nombre_b);

    // Affichage des résultats
    printf("Le triple de %d est %d\n", nombre, resultat_triple);
    printf("La somme de %d et %d est %d\n", nombre_a, nombre_b, resultat_addition);

    return 0;  // Fin du programme
}

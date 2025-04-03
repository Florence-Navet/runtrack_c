/*
pour déclarer un tableau
*/

#include <stdio.h>

const int A = 2;
const int B = 3;
const int TAILLE = A * B;

int main() {
    int tab[TAILLE] = {1, 2, 3, 4, 5, 6};
    int taille = TAILLE;

    printf("%d\n", taille);
    return 0;
}

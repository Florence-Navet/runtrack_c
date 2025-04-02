//pointeur

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int age = 15;

    printf("La valeur de la variable est %d\n", age);
    printf("L'adresse de la variable est: %p\n", &age);
    
    int* pointeur;
    pointeur = &age;

    printf("La valeur du pointeur est : %p\n", pointeur);
    printf("La valeur du pointeur est : %d\n", *pointeur);

    return 0;
}

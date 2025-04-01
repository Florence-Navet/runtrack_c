#include <stdio.h>
#include <stdlib.h>

int main() {
    int age = 10;
    int *pointeurSurAge = &age;

    printf("Adresse mémoire du pointeur : %p\n", (void*)pointeurSurAge);
    printf("Valeur pointée par le pointeur : %d\n", *pointeurSurAge);

    return 0;
}

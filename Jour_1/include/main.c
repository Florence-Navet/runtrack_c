// main.c
// header

#include <stdio.h>
#include "aire.h"

int main(int argc, char * arg[]){
    double resultat;
    resultat = aireRectangle(10.0, 20.0);

    printf("L'aire du rectange est : %f\n", resultat);
    return 0;
}

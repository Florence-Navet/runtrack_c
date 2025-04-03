//pointeur function

#include <stdio.h>


void triple(int *nombre)
{
    *nombre *= 3; //valeur se trouvant dant le pointeur
}

int main(int argc, const char * argv[]){
    int value = 10;
    int *pointeur = &value;

    triple(pointeur); //je pointeur en paramètre pour récupérer la valeur de value
    printf("La valeur de value : %d\n", value);
    return 0;
}


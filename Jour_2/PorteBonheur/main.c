#include <stdlib.h>
#include <stdio.h>

int main(void) {

        int* chiffre = NULL;
        chiffre = malloc(sizeof(int));

        if (chiffre == NULL) 
        {
                exit(0);
        }
        printf("Quel est votre chiffre porte-bonheur ? ");
        scanf("%d", chiffre);

        printf("votre chiffre porte-bonheur est %d", *chiffre);

        free(chiffre);



        return 0;
}


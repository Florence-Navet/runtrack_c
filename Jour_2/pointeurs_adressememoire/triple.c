//triplepointeur 

#include <stdio.h>
#include <stdlib.h>

void triplePointeur(int *pointeurSurNombre);

int main(int argc, char *argv[])
{
    int nombre = 5;

    triplePointeur(&nombre); // On envoie l'adresse avec & de nombre à la fonction
    printf("%d", nombre); // On affiche la variable nombre.&d La fonction a directement modifié la valeur de la variable car elle connaissait son adresse

    return 0;
}

void triplePointeur(int *pointeurSurNombre)
{
    *pointeurSurNombre *= 3; // On multiplie par 3 la valeur de nombre
}
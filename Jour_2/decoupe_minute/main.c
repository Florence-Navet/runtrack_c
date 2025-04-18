//decoupe minute

#include <stdio.h>
#include <stdlib.h>

void decoupeMinutes(int* pointeurHeures, int* pointeurMinutes);

int main(int argc, char *argv[])
{
    int heures = 0, minutes = 90;

    // On envoie l'adresse de heures et minutes pour recuperer heures et minutes
    decoupeMinutes(&heures, &minutes); 

    // Cette fois, les valeurs ont été modifiées !
    printf("%d heures et %d minutes", heures, minutes);

    return 0;
}
// fonction modifie valeur en memoire car possede adresse pointeur (si pas * on modifie l'adresse contenue dans le pointeur)
void decoupeMinutes(int* pointeurHeures, int* pointeurMinutes)
{
    /* Attention à ne pas oublier de mettre une étoile devant le nom
    des pointeurs ! Comme ça, on peut modifier la valeur des variables,
    et non leur adresse ! Pour ne pas modifier des adresse ??? */

    *pointeurHeures = *pointeurMinutes / 60;
    *pointeurMinutes = *pointeurMinutes % 60; 
}
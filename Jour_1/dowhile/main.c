/* boucle do while verifie quand meme une seule fois la condition 
 contrairement à la boucle while */

#include <stdio.h>

int main(){
    int compteur = 10; 

    do
    {
        printf("%d\n", compteur);
        compteur--;
    }while (compteur != 0);

    return 0;
}

    


/* boucle do while verifie quand meme une seule fois la condition 
 contrairement à la boucle while */

 /*boucle for*/


/*
int main(){
    int compteur = 10; 

    do
    {
        printf("%d\n", compteur);
        compteur--;
    }while (compteur != 0);

    return 0;
}
*/
/*
int main() {
    int compteur = 0;
    while(compteur <=10)
    {
        printf("%d\n", compteur);
        compteur++;
    }
    return 0;

}
*/   
#include <stdio.h>
int main() {
    for (int compteur = 0; compteur <= 10; compteur++)
    {
        printf("%d\n", compteur);
    }
    return 0;

}



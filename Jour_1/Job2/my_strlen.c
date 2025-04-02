#include <stdio.h>
#include<string.h>


int longueurChaine(const char* chaine);

int main(int argc, const char *argv[])
{
    char chaine[] = "Je code alors que j'ai mal au coude !!!";
    int longueur = 0;

    // recuperer longueur chaine avec fct
    longueur = longueurChaine(chaine);

    //afficher longueur chaine
    printf("La chaîne \"%s\" fait %d caractères de long.\n", chaine, longueur);

    return 0;
}

int longueurChaine(const char* chaine)
{
    int nombreDeCaracteres = 0;
    char caractereActuel = 0;
    
    do
    {
        /* code */
        caractereActuel = chaine[nombreDeCaracteres];
        nombreDeCaracteres++;
    } 
    while (caractereActuel != '\0'); //on boucle tant qu'on n'est pas arrivé à '\O'
    nombreDeCaracteres--; //retirer \0 pour ne par le compter
    
    return nombreDeCaracteres;
}
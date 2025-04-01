//fonction avec aucun paramètre en entree

#include <stdio.h>
#include <stdlib.h>

int menu()
{
    int choix = 0;
    
    while (choix < 1 || choix > 4)
    {
        printf("Menu :\n");
        printf("1 : Crêpes au saumon garnies par le chef Tristan\n");
        printf("2 : Hamburger et Frites maison faites par le chef Julien\n");
        printf("3 : Le Gratin de Pâte spécial Kévin\n");
        printf("4 : La surprise du Chef Quentin (je ne vous en dis pas plus..)\n");
        printf("Votre choix ? ");
        scanf("%d", &choix);
    }    
    
    return choix;
}    

int main(int argc, char *argv[])
{    
    switch (menu())
    {
        case 1:
            printf("Vous avez pris les crêpes\n");
            break;
        case 2:
            printf("Vous avez pris le hamburger et ses frites\n");
            break;
        case 3:
            printf("Vous avez pris le gratin de pates");
            break;
        case 4:
            printf("Vous avez pris la surprise de Quentin. Vous avez l'esprit d'aventure. Sacré matelot !\n");
            break;    
    }
       
    return 0;
}


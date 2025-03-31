/*
Ci-dessous ce sont des directives de préprocesseurs.
Ces lignes permettent d'ajouter des fichiers au projet,
fichiers que l'on appelle bibliothèques.
Grâce à ces bibliothèques, on disposera de fonctions toutes prêtes pour afficher
par exemple un message à l'écran.
*/
#include <stdio.h>
#include <stdlib.h>
//\n pour entree et \t pour tabulation

/*Ci-dessous, vous avez la fonction principale du programme, appelée main.
C'est par cette fonction que tous les programmes commencent.
Ici, ma fonction se contente d'afficher bonjour à l'écrna
*/
int main()
{
    printf("Bonjour\t!\n"); //cette fonction affiche bonjour à l'écran
    return 0; //le programme renvoie le nombre 0 puis s'arrête
}

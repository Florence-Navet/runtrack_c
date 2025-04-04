// main.c
// header

#include <stdio.h>


int main(int argc, char * arg[]){
    char *ma_chaine_prenom = "Kevin";
    printf("%s\n",ma_chaine_prenom);
    char *ma_chaine_nom = " Mousquet";
    char *ma_chaine ="";
    ma_chaine = ma_chaine_prenom + ma_chaine_nom;
    printf("%s",ma_chaine);
}

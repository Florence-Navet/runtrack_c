/*
Vous devez implémenter la fonction split (dans le fichier split.c) qui prend en paramètre
une chaîne de caractères, et renvoie un tableau de chaînes de caractères, résultat de la
séparation de la chaîne entrante séparée par mots, et se termine par un pointeur NULL.

Fonctions autorisées : malloc.

Par exemple, la chaîne “ hello world have fun” renvoie un tableau contenant “hello”,
“world”, “have”, “fun”, et NULL.
Les espaces comprennent aussi les tabulations et les retours à la ligne.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//fonction pour savoir si c'est un caractère est un séparateur (espace, tab ou saut de ligne)
int est_separateur(char c) {
    return c == ' ' || c == '\t' || c == '\n';
}

//fonction pour compter le nombre de mots
int compter_mots(const char *chaine){
    int count = 0;
    int dans_un_mot = 0;

    while(*chaine) {
        if(est_separateur(*chaine)) {
            dans_un_mot = 0; //reset si on rencontre un séparateur
        } else {
            if(!dans_un_mot) {  // Condition inversée pour détecter le début du mot
                count++;  // On compte un nouveau mot
                dans_un_mot = 1; // On marque qu'on est dans un mot
            }
        }
        chaine++;
    }
    return count;
}

//fonction pour copier un mot
char *copier_mot(const char *debut, int longueur) {
    char *mot = malloc(longueur + 1); //pour \0
    if(mot == NULL){ //vérification d'échec de malloc
        return NULL;
    }
    for (int i = 0; i < longueur; i++) { //parcours mot et ajoute
        mot[i] = debut[i]; //copie chaque caractère du mot
    }
    mot[longueur] = '\0'; //ajoute caractère nul
    return mot; //retourne pointeur vers mot copié
}

//fonction split
char **split(const char *chaine) {
    int nb_mots = compter_mots(chaine);
    char **tableau = malloc((nb_mots + 1) * sizeof(char*)); //++1 pour le NULL final
    if (tableau == NULL) {  // Vérification de l'échec de malloc
        return NULL;
    }

    int i = 0;
    while (*chaine) {  // On doit vérifier la fin de la chaîne
        //on saute les espaces
        while(*chaine && est_separateur(*chaine)) chaine++;

        //début d'un mot
        const char *debut = chaine;
        int len = 0;

        //Tant qu'on n'a pas un séparateur, on compte le mot
        while (*chaine && !est_separateur(*chaine)) {
            len++;
            chaine++;
        }

        //si la longueur est plus que 0, on copie le mot
        if (len > 0) {
            tableau[i] = copier_mot(debut, len);
            i++;
        }
    }
    tableau[i] = NULL; // fin du tableau
    return tableau;
}

// main pour tester fct
int main(){
    const char *ma_chaine = " Je m'appelle kévin.\nJe suis en train de travailler sur du code.";
    char **mots = split(ma_chaine);

    for (int i = 0; mots[i] != NULL; i++){
        printf("Mot %d : %s\n", i+1, mots[i]);
        printf("Mot %d : %s, Longueur : %d\n", i + 1, mots[i], strlen(mots[i]));  // Afficher le mot et sa longueur
        free(mots[i]); //libère chaque mot
    }
    free(mots); //libère tableau

    return 0;
}

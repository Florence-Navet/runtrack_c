#include <stdio.h>
#include <string.h>

int longueurChaine(const char* chaine);

int main(int argc, const char *argv[])
{
    char chaine[] = "Je suis à Aix chez Kévin";
    int longueur = 0; 

    // On récupère la longueur de la chaîne avec notre propre fonction
    longueur = longueurChaine(chaine);

    // On affiche la longueur de la chaîne
    printf("La chaîne \"%s\" fait %d caractères de long.\n", chaine, longueur);

    return 0;
}

int longueurChaine(const char* chaine)
{
    int nombreDeCaracteres = 0;
    char caractereActuel = 0;

    do
    {
        caractereActuel = chaine[nombreDeCaracteres];
        nombreDeCaracteres++;

    } while (caractereActuel != '\0'); // On boucle tant qu'on n'est pas arrivé à '\0'

    nombreDeCaracteres--; // On retire 1 caractère pour ne pas compter le '\0'

    return nombreDeCaracteres;
}

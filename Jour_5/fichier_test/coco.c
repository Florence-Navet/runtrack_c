/* R
eplacez le curseur au début du fichier avec rewind
*/
#include <stdio.h>

int main() {
    FILE *fichier;
    char texte[100];

    // Ouvrir un fichier en mode lecture/écriture
    fichier = fopen("exemple.txt", "w+");
    
    if (fichier == NULL) {
        printf("Impossible d'ouvrir le fichier.\n");
        return 1;
    }

    // Écrire du texte dans le fichier
    fputs("Bonjour, ceci est un exemple de fichier.\n", fichier);
    fputs("Nous allons tester la fonction rewind.\n", fichier);

    // Revenir au début du fichier
    rewind(fichier);

    // Lire et afficher le texte à partir du début du fichier après le rewind
    printf("Lecture après rewind:\n");
    while (fgets(texte, sizeof(texte), fichier)) {
        printf("%s", texte);
    }

    // Fermer le fichier
    fclose(fichier);

    return 0;
}

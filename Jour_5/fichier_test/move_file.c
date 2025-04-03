#include <stdio.h>

int main() {
    FILE *fichier;
    char texte[100];

    // Tentative d'ouverture du fichier en mode lecture/écriture (création si nécessaire)
    fichier = fopen("exemple.txt", "w+");

    if (fichier == NULL) {
        printf("Impossible d'ouvrir ou de créer le fichier.\n");
        return 1;
    }

    // Écrire du texte dans le fichier pour pouvoir le lire après
    fputs("Ceci est un texte d'exemple dans le fichier.\n", fichier);
    fputs("Cela permettra de tester les déplacements du curseur et la lecture.\n", fichier);

    // Afficher la position initiale du curseur (avant de déplacer le curseur)
    long position_initiale = ftell(fichier); // Obtient la position actuelle du curseur
    printf("Position initiale du curseur: %ld\n", position_initiale);

    // Déplacer le curseur de 10 caractères à partir du début du fichier
    fseek(fichier, 10, SEEK_SET);
    printf("Position après fseek(10, SEEK_SET): %ld\n", ftell(fichier));

    // Lire la chaîne après le déplacement du curseur
    fgets(texte, sizeof(texte), fichier);
    printf("Texte lu après fseek(10, SEEK_SET): %s\n", texte);

    // Déplacer le curseur de 5 caractères avant la position actuelle
    fseek(fichier, -5, SEEK_CUR);
    printf("Position après fseek(-5, SEEK_CUR): %ld\n", ftell(fichier));

    // Lire à nouveau la chaîne après le déplacement du curseur
    fgets(texte, sizeof(texte), fichier);
    printf("Texte lu après fseek(-5, SEEK_CUR): %s\n", texte);

    // Déplacer le curseur à la fin du fichier
    fseek(fichier, 0, SEEK_END);
    printf("Position après fseek(0, SEEK_END): %ld\n", ftell(fichier));

    // Ajouter du texte à la fin du fichier
    fputs("\nAjouté à la fin du fichier.", fichier);
    printf("Texte ajouté à la fin du fichier.\n");

    // Fermer le fichier
    fclose(fichier);

    return 0;
}

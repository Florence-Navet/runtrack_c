#include <stdio.h>

int main(int argc, char *argv[]) {
    // Renommer le fichier exemple.txt en toto.txt
    if (rename("exemple.txt", "toto.txt") == 0) {
        printf("Le fichier a été renommé avec succès.\n");
    } else {
        printf("Erreur lors du renommage du fichier.\n");
    }

    return 0;
}

/*
    // Supprimer le fichier toto.txt
    if (remove("toto.txt") == 0) {
        printf("Le fichier a été supprimé avec succès.\n");
    } else {
        printf("Erreur lors de la suppression du fichier.\n");
    }
*/

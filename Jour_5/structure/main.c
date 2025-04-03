#include <stdio.h>
#include "main.h"  // Inclure le fichier d'en-tête contenant def structure

// Fonction qui affiche les infos de la personne
void afficher_personne(struct Personne p) {
    printf("\nInformations sur la personne:\n");
    printf("Nom: %s", p.nom);
    printf("Prénom: %s", p.prenom);
    printf("Adresse: %s", p.adresse);
    printf("Âge: %d\n", p.age);
    printf("Étudiant: %s\n", p.etudiant ? "Oui" : "Non");
}

int main() {
    struct Personne personne1;

    //Saisie infos
    printf("Entrez le nom: ");
    fgets(personne1.nom, sizeof(personne1.nom), stdin);

    printf("Entrez le prénom: ");
    fgets(personne1.prenom, sizeof(personne1.prenom), stdin);

    printf("Entrez l'adresse: ");
    fgets(personne1.adresse, sizeof(personne1.adresse), stdin);

    printf("Entrez l'âge: ");
    scanf("%d", &personne1.age);

    printf("Est-ce un étudiant (1 pour Oui, 0 pour Non)?: ");
    scanf("%d", &personne1.etudiant);

    // Affichage infos
    afficher_personne(personne1);

    return 0;
}

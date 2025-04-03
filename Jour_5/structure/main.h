#ifndef MAIN_H
#define MAIN_H

// Définition de la structure Personne
struct Personne {
    char nom[100];
    char prenom[100];
    char adresse[100];
    int age;
    int etudiant; // 1 si étudiant, 0 sinon
};

// Déclaration de la fonction pour afficher les informations de la personne
void afficher_personne(struct Personne p);

#endif

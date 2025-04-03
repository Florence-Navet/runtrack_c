/*
printer la macro code source
*/

#include <stdio.h>


#define MAJEUR(age, nom) if (age >= 18) \
                    printf("Vous etes majeur %s\n", nom);



int main(int argc, char *argv[])
{
    MAJEUR(22, "Maxime")

    return 0;
}
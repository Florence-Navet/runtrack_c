#include <stdio.h>
#include <stdlib.h>
/*
int main(int argc, char *argv[])
{
  int resultat = 0, nombre1 = 0, nombre2 = 0;

  // On demande les nombres 1 et 2 à l'utilisateur :

  printf("Entrez le nombre 1 : ");
  scanf("%d", &nombre1);
  printf("Entrez le nombre 2 : ");
  scanf("%d", &nombre2);

  // On fait le calcul :

  resultat = nombre1 + nombre2;

  // Et on affiche l'addition à l'écran :

  printf ("%d + %d = %d\n", nombre1, nombre2, resultat);

  return 0;
}
*/

/*
//faire une soustration

int main(int argc, char *argv[])
{
  int resultat = 0, nombre1 = 0, nombre2 = 0;

  // On demande les nombres 1 et 2 à l'utilisateur :

  printf("Entrez le nombre 1 : ");
  scanf("%d", &nombre1);
  printf("Entrez le nombre 2 : ");
  scanf("%d", &nombre2);

  // On fait le calcul :

  resultat = nombre1 * nombre2;

  // Et on affiche l'addition à l'écran :

  printf ("%d * %d = %d\n", nombre1, nombre2, resultat);

  return 0;
}
*/
/*
int main()
{
    int valeur1 = 15;
    int valeur2 = 5;
    int resultat;
    resultat = valeur1 * valeur2 - valeur1;

    printf("%d \n", resultat);
    return 0;
}
*/
#include <stdio.h>

int main()
{
    int nombre = 7;

    nombre += 4; // nombre vaut 5 (1 + 4)

    printf("%d \n", nombre); // Affiche 5

    nombre -= 3; // ...

    printf("%d \n", nombre); // Affiche 8

    nombre /= 3; // ...

    printf("%d \n", nombre); // Affiche 2

    nombre %= 2; // ...

    printf("%1f \n", nombre); // Affiche 0.0000

}






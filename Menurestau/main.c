#include <stdio.h>
#include <stdlib.h>

int main()
{
    int CHOIXMENU;

    printf("===== Menu =====\n");
    printf("1. Royal Cheese\n");
    printf("2. Chicken Burger\n");
    printf("3. Cheeseburger\n");
    printf("4. Fish Burger\n");
    printf("5. Quel est votre choix ?\n"); // Demande à l'utilisateur


    scanf("%d", &CHOIXMENU);

    switch (CHOIXMENU)
    {
    case 1:
        printf("Vous avez choisi le Royal Cheese.\n");
        break;  // Il manquait le point-virgule
    case 2:
        printf("Vous avez choisi le Chicken Burger.\n");
        break;  // Il manquait le point-virgule
    case 3:
        printf("Vous avez choisi le Cheeseburger.\n");
        break;  // Il manquait le point-virgule
    case 4:
        printf("Vous avez choisi le Fish Burger.\n");
        break;  // Il manquait le point-virgule
    default:
        printf("Vous n'avez pas rentré un nombre correct.\n");
        break;  // Même ici, même si le `break` n'est pas nécessaire après `default`
    }

    return 0;
}

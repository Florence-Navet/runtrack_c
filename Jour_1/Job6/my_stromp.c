/*
Vous devez implémenter la fonction my_strcmp (dans un fichier my_strcmp.c) qui
prend en paramètre deux chaînes de caractères, les compare, et renvoie 0 si elles sont
identiques, et une valeur négative si la première chaîne est inférieure à la deuxième, ou
positive si elle est supérieure à la deuxième.
Note : Une chaîne est inférieure à une autre si le premier caractère différent dans les
deux chaînes est inférieur (dans l’ordre de la table ASCII) dans la première chaîne par
rapport à celui de la deuxième chaîne.
Par exemple, la chaîne “abc” est inférieure à la chaîne “abd” parce que les deux premiers
caractères sont identiques, mais “c” est inférieur à “d” dans la table ASCII.
*/
#include <stdio.h>
#include <string.h>


// Fonction qui compare deux chaînes de caractères
int my_strcmp(const char *str1, const char *str2)
{
    int i = 0;

    // Comparer les caractères un par un
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return str1[i] - str2[i]; // Retourne la différence ASCII
        }
        i++;
    }

    // Comparer les longueurs (si une chaîne est plus longue que l'autre)
    return str1[i] - str2[i];
}

// Test de la fonction
int main()
{
    const char *str1 = "Je m'appelle Kévin.";
    const char *str2 = "Je m'appelle Florence.";

    int result = my_strcmp(str1, str2);

    if (result == 0)
    {
        printf("Les chaînes sont identiques.\n");
    }
    else if (result < 0)
    {
        printf("La première chaîne est inférieure à la deuxième.\n");
    }
    else
    {
        printf("La première chaîne est supérieure à la deuxième.\n");
    }

    return 0;
}


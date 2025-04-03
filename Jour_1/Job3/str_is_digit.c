// fonction vérifiant si un chaine ne  contient que des caracteres

#include <stdio.h>

int str_is_digit(const char *str) 
{
    int i = 0;

    //verifions si la chaine est vide
    if (str[i] == '\0')
    {
        return 0; 
    }

    //parcourons la chaine
    while (str[i] != '\0')
    {
        if (str[i] < '0' || str[i] > '9')
        {
            return 0; // ce n'est pas un chiffre.
        }
        i++;
    }
    return 1; // ce sont des chiffres
}

//Test de la fct

int main()
{
    char *caractere1 = "12345";
    char *caractere2 = "456dc";
    char *caractere3 = "";

    printf("\"%s\" ne contient que des chiffres ? %d\n", caractere1, str_is_digit(caractere1)); //1
    printf("\"%s\" ne contient que des chiffres ? %d\n", caractere2, str_is_digit(caractere2)); //0
    printf("\"%s\" ne contient que des chiffres ? %d\n", caractere3, str_is_digit(caractere3)); //0
}
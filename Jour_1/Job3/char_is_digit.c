#include <stdio.h>

// Fonction vérifiant si un caractère est un chiffre
int char_is_digit(char symbole) 
{
    if (symbole >= '0' && symbole <= '9') 
    {
        return 1; // Le caractère est un chiffre
    } 
    else 
    {
        return 0; // Le caractère n'est pas un chiffre
    }
}

// Test de la fonction
int main() 
{
    char caractere1 = '5';
    char caractere2 = 'a';

    printf("%c est un chiffre ? %d\n", caractere1, char_is_digit(caractere1)); // Doit afficher 1
    printf("%c est une lettre ? %d\n", caractere2, char_is_digit(caractere2)); // Doit afficher 0

    return 0;
}

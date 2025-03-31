#include <stdio.h>  
extern void my_putchar(char c);  // Déclaration de la fonction my_putchar pour l'utiliser 

// Fonction my_putstr : prend une chaîne de caractères en entrée et l'affiche en utilisant my_putchar()
void my_putstr(char *str) {
    // Tant que le caractère pointé par 'str' n'est pas le caractère nul '\0' (fin de chaîne)
    while (*str) {
        my_putchar(*str);  // Appel à my_putchar() pour afficher le caractère actuel de la chaîne
        str++;  // On passe au caractère suivant de la chaîne
    }
}

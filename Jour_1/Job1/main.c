/*
pour compiler pour et faire son poin ese
gcc my_putchar.c my_putstr.c main.c -o my_program
pour executer son programme : ./my_programm
*/


#include <stdio.h>

extern void my_putstr(char *str);  // Déclaration de my_putstr()

int main() {
    my_putstr("Hello, world!\n");  // Test de my_putstr()
    return 0;
}

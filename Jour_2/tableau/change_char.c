//utiliser char pour manipuler une chaine de caractere

#include <stdio.h>

int main(int argc, const char * argv[])

{   
    char chaine [6];

    chaine [0] = 'h';
    chaine [1] = 'e';
    chaine [2] = 'l';
    chaine [3] = 'l';
    chaine [4] = 'o';
    chaine [5] = '\0';

    printf("%s\n", chaine);

    return 0;

       
}
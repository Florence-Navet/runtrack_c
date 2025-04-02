//utiliser char pour manipuler une chaine de caractere

#include <stdio.h>

int main(int argc, const char * argv[])
{
    char firstname[100];

    printf("What's your name ?");
    scanf("%s", firstname);

    printf("Hi %s, I'm glad to meet you !!", firstname);

    return 0;
}
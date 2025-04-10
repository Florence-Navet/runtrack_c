#include <stdio.h>
#include <string.h>

int monNombre = 0;
char chaine[] = "Hello world";

int main(int argc, char *argv[]) {
    printf("char   : %lu octets\n", sizeof(char));
    printf("int    : %lu octets\n", sizeof(int));
    printf("long   : %lu octets\n", sizeof(long));
    printf("double : %lu octets\n", sizeof(double));

    return 0;
}

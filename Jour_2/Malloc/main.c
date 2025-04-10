#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* memoireAllouee = malloc(sizeof(int));
    if (memoireAllouee == NULL)
    {
        exit(EXIT_FAILURE);
    }

    printf("Quel âge avez-vous ? ");
    scanf("%d", memoireAllouee);
    printf("Vous avez %d ans\n", *memoireAllouee);

    free(memoireAllouee);
    return 0;
}

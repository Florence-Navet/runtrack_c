//tableau de float

#include <stdio.h>
void nombresPairs (int*tab, int taille)
{
    for (int i = 0 ; i < 4; i++)
    {
        if (tab[i] % 2 == 0)
        {
            printf("Le nombre %d est pair:\n", tab[i]);
        }
    }

}


int main(int argc, const char * argv[])
{
    int tab[4] = {23, 26, 28, 30};

    nombresPairs(tab, 4);
    return 0;
   
}

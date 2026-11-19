#include <stdio.h>

int main(void)
{
    int number = 20;
    int compteur = 0;

    while (compteur < number)
    {
        printf("%d\n", compteur);
        compteur++;
    }

    return 0;
}

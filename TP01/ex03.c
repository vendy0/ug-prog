#include <stdio.h>

int main(void)
{
    int curseur = 42;

    while (curseur <= 1337)
    {
        if (curseur % 2 == 0)
            printf("%d ", curseur);
        curseur++;
    }
    printf("\n");

    return 0;
}

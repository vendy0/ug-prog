#include <stdio.h>
#define BORNE_INF 42
#define BORNE_SUP 1337

int main(void)
{
    int curseur = BORNE_INF;

    while (curseur <= BORNE_SUP)
    {
        if (curseur % 2 == 0)
            printf("%d ", curseur);
        curseur++;
    }
    printf("\n");

    return 0;
}

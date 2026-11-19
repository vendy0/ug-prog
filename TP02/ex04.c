#include <stdio.h>

void ft_pyramid(int number)
{
    int i, j;
    
    for (i = 0; i <= number; i++)
    {
        for (j = 0; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }
}

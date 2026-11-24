#include <stdio.h>

void ft_print_int_tab(int tab[], int size)
{
    if (size <= 0)
        return;

    for (int i = 0; i < size; i++)
    {
        printf("%d", tab[i]);
        if (i == size - 1)
            printf("\n");
        else
            printf(" ");
    }
}

#include <stdio.h>

void ft_print_even_numbers_in_range(int start, int end)
{
    if (start == end && start % 2)
        return;

    if (start <= end)
    {
        if (start % 2)
            start++;
        for (long i = start; i <= end; i += 2)
            printf("%ld ", i);
    }
    else
    {
        if (start % 2)
            start--;
        for (long i = start; i >= end; i -= 2)
            printf("%ld ", i);
    }
}

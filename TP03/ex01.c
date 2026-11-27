#include <stdio.h>

void ft_print_asc(int start, int end)
{
    if (start % 2)
        start++;
    for (long i = start; i <= end; i += 2)
    {
        printf("%ld", i);

        if ((!(end % 2) && i != end) || (end % 2 && i != end - 1))
            printf(" ");
    }
}

void ft_print_desc(int start, int end)
{
    if (start % 2)
        start--;
    for (long i = start; i >= end; i -= 2)
    {
        printf("%ld", i);
        if ((!(end % 2) && i != end) || (end % 2 && i != end + 1))
            printf(" ");
    }
}

void ft_print_even_numbers_in_range(int start, int end)
{
    if (start == end && start % 2)
        return;

    if (start <= end)
        ft_print_asc(start, end);
    else
        ft_print_desc(start, end);
}

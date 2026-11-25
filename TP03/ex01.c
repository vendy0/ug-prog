#include <stdio.h>

void ft_print_ascending(int start, int end)
{
    for (int i = start; i <= end; i += 2)
    {
        if (i == start && i % 2)
        {
            // Subtract one, then continue.
            // Two is added on the next pass,
            // which gives the next even number.
            i--;
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");
}

void ft_print_descending(int start, int end)
{
    for (int i = start; i >= end; i -= 2)
    {
        if (i == start && i % 2)
        {
            // Add one, then continue.
            // Two is substracted on the next pass,
            // which gives the previous even number.
            i++;
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");
}

void ft_print_even_numbers_in_range(int start, int end)
{
    // If start and end are the same odd number,
    // there is nothing to display, so leave the function.
    if (start == end && start % 2)
        return;
    else if (start < end)
        ft_print_ascending(start, end);
    else
        ft_print_descending(start, end);
}

int main()
{
    ft_print_even_numbers_in_range(8, 8);
}
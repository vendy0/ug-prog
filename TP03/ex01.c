#include <stdio.h>

// swap start and end if start > end
void swap(int *start, int *end)
{
    int temp;

    if (*start > *end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
    }
}

void ft_print_even_numbers_in_range(int start, int end)
{
    int i;

    swap(&start, &end);
    
    // If start and end are the same odd number,
    // there is nothing to display, so leave the function.
    if (start == end && start % 2)
        return;

    for (i = start; i <= end; i += 2)
    {
        if (i == start && i % 2)
        {
            // Subtract one, then continue.
            // Two is added on the next pass, which gives the next even number.
            i--;
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");
}

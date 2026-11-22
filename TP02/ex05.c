#include <stdio.h>

void print_even(int start, int end)
{
    int even;
    int i = 0;

    // Check each number between "start" and "end".
    // If the number is even, "if (!(even % 2))":
    // on the first pass, display "Even: " first.
    // Then display the number.
    // If we already entered the loop once, add a newline.
    for (even = start; even <= end; even++)
    {
        if (!(even % 2))
        {
            i++;
            if (i == 1)
                printf("Even : ");
            printf("%d", even);
        }
    }
    if (i > 0)
        printf("\n");
}

void print_odd(int start, int end)
{
    int odd;
    int i = 0;
    
    // Check each number between "start" and "end".
    // If the number is odd, "if (even % 2)":
    // on the first pass, display "Odd: " first.
    // Then display the number.
    // If we already entered the loop once, add a newline.
    for (odd = start; odd <= end; odd++)
    {
        if (odd % 2)
        {
            i++;
            if (i == 1)
                printf("Odd : ");
            printf("%d", odd);
        }
    }
    if (i > 0)
        printf("\n");
}

// Call of the functions to display even and odd numbers
void ft_print_even_odd(int start, int end)
{
    print_even(start, end);
    print_odd(start, end);
}

#include <stdio.h>

void ft_print_number_len(int number)
{
    long n = number;
    int len = 0;

    if (n == 0)
    {
        printf("%d\n", 1);
        return;
    }

    // Find the absolute value of number
    if (n < 0)
        n = -n;

    // while number > 0.
    // increment len, 
    // then remove the last digit with "number /= 10".
    while (n > 0)
    {
        len++;
        n /= 10;
    }
    printf("%d\n", len);
}

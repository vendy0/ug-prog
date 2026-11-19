#include <stdio.h>

void ft_print_number_len(int number)
{
    int len = 0;

    // Find the absolute value of number
    if (number < 0)
        number *= -1;

    // Do a first pass in case number is 0.
    // Increment len, then remove the last digit with "number /= 10".
    // Then repeat while number > 0.
    do
    {
        len++;
        number /= 10;
    } while (number > 0);
    printf("%d\n", len);
}

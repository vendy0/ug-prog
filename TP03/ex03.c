#include <unistd.h>

// Recursive function to display a number
// with the "write" function.
void ft_putnbr(int n)
{
    char c;

    if (n >= 10)
        ft_putnbr(n / 10);
    c = '0' + n % 10;
    write(1, &c, 1);
}

void ft_triangle_v2(int number)
{

    // If number is negative, there is nothing to display,
    // so leave the function.
    if (number < 0)
        return;

    // Nested loops: the inner one displays the numbers on a line,
    // the outer one displays each line.
    // Like the function in ex02.c
    for (int i = 0; i <= number; i++)
    {
        for (int j = 0; j <= i; j++)
            ft_putnbr(j);

        if (i != number)
            write(1, "\n", 1);
    }
}

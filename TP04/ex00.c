#include <unistd.h>

void ft_print_lines(char first_element, char middle_element, int lenght)
{
    for (int i = 0; i < lenght; i++)
    {
        if (i == 0 || i == lenght - 1)
            write(1, &first_element, 1);
        else
            write(1, &middle_element, 1);
    }
    write(1, "\n", 1);
}

void ft_square_one(int x, int y)
{
    int columns = y;

    if (x <= 0)
        return;

    while (columns > 0)
    {
        if (columns == y || columns == 1)
            ft_print_lines('o', '-', x);
        else
            ft_print_lines('|', ' ', x);
        columns--;
    }
}

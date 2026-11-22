#include <unistd.h>

void ft_print_lines(char first_element, char middle_element, char last_element,
                    int lenght)
{
    for (int i = 0; i < lenght; i++)
    {
        if (i == 0)
            write(1, &first_element, 1);
        else if (i == lenght - 1)
            write(1, &last_element, 1);
        else
            write(1, &middle_element, 1);
    }
    write(1, "\n", 1);
}

void ft_square_four(int x, int y)
{
    {
        int columns = y;

        if (x <= 0)
            return;

        while (columns > 0)
        {
            if (columns == y)
                ft_print_lines('A', 'B', 'C', x);
            else if (columns == 1)
                ft_print_lines('C', 'B', 'A', x);
            else
                ft_print_lines('B', ' ', 'B', x);
            columns--;
        }
    }
}

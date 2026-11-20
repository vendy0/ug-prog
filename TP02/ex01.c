#include <unistd.h>

void ft_print(void)
{
    write(1, "Tant que le souffle n'a pas quitté mon corps, ", 47);
    write(1, "la défaite n'est qu'une rumeur.\n", 33);
}

void ft_print_more(int number)
{
    for (int i = number; i > 0; i--)
    {
        ft_print();
    }
}

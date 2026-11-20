#include <unistd.h>

void ft_triangle(int number)
{
    // Variables
    int i;
    int j;
    
    // if the number if 0 or negative, 
    // the function doesn't display anything and returns
    if (number <= 0)
        return;
        
    // Nested loop: the inner one display each * for the line
    // the outer one displays each line. 
    for (i = 0; i < number; i++)
    {
        for (j = 0; j <= i; j++)
            write(1, "*", 1);
        write(1, "\n", 1);
    }
}

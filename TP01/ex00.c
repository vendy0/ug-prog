#include <stdio.h>

int main(void)
{
    // Variables
    int a = 0;
    int b = 0;
    int total;

    while (b < 2) 
    {
        a = 0;
        while (a < 3) 
        {
            a = a + 1;
            total = total + 1;
        }
        b = b + 1;
    }

    printf("%d\n", total);

    return 0;
}

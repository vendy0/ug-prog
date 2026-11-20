#include <stdio.h>

int main(void)
{
    int sum = 0;
    
    for (int number = 1000; number > 0; number--)
        sum += number;
    printf("%d\n", sum);

    return 0;
}

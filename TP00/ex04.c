#include <stdio.h>

int main(void) 
{
    int T = 903219;

    printf("%d\n", T / 3600);
    printf("%d\n", (T % 3600) / 60);
    printf("%d\n", T % 60);
    
    return 0;
}

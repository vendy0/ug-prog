#include <unistd.h>

int main(void)
{
    int number = 20;
    
    while (number > 0)
    {
        write(1, "Hello World\n", 12);
        number--;
    }

    return 0;
}

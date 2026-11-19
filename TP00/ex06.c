#include <stdio.h>

int main(void)
{
    int age = 19;

    if (age <= 1)
        printf("bonjour bébé !\n");
    else if (age > 1&& age <= 14)
        printf("bonjour mes petits !\n");
    else if (age > 14 && age <= 30)
        printf("bonjour jeune homme !\n");
    else if (age > 30 && age <= 60)
        printf("bonjour monsieur !\n");
    else
        printf("bonjour manmie !\n");

    return 0;
}

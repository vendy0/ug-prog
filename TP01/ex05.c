#include <stdio.h>

int main(void){
    int number;
    int somme = 0;
    
    for (number = 1000; number > 0; number--)
        somme += number;
    printf("%d\n", somme);

    return 0;
}

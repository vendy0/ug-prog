#include <stdio.h>

int main(void){
    unsigned int number = 20;
    unsigned int compteur = 0;

    while (compteur < number){
        printf("%d\n", compteur);
        compteur++;
    }

    return 0;
}
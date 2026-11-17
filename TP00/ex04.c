#include <stdio.h>


int main(void) {
    unsigned int T;
    unsigned int heures;
    unsigned int minutes;
    unsigned int secondes;

    T = 364257;
    heures = T/3600;
    minutes = (T%3600) / 60;
    secondes = T%60;
    
    printf("%d\n", heures);
    printf("%d\n", minutes);
    printf("%d\n", secondes);
    
    return 0;
}
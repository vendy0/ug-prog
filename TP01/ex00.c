#include <stdio.h>

int main(void){
    // Variables
    int a;
    int b;
    int total;
    b = 0;
    total = 0;

    while (b < 2) {
        a = 0;
        while (a < 3) {
            a = a + 1;
            total = total + 1;
        }
        b = b + 1;
    }

    printf("%d\n", total);

    return 0;
}

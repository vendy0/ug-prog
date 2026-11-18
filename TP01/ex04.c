#include <stdio.h>

int main(void){
    // Variables declaration
    int a;
    int b;
    int c;
    int delta;
    float sqrt_delta;
    float ecart_delta;
    
    // Variables affection
    a = 5145;
    b = 2155;
    c = -4158;
    delta = b * b - 4 * a * c;
    sqrt_delta = 0;
    ecart_delta = delta;

    // Calculating of delta with a while loop 
    while (ecart_delta > 0.001)
    {
        sqrt_delta += 0.001;
        ecart_delta = delta - (sqrt_delta*sqrt_delta);
    }

    // Tests according to the different delta cases
    if (delta > 0)
    {
        printf("Delta = %d\n", delta);
        printf("Il existe deux solutions\n");
        printf("x1 = %f\n", (-b - sqrt_delta) / (2.0 * a));
        printf("x2 = %f\n", (-b + sqrt_delta) / (2.0 * a));
    }
    else if (delta == 0)
    {
        printf("Delta = 0\n");
        printf("Il existe 1 solution\n");
        printf("x = %f\n", -b / (2.0 * a));
    }
    else
    {
        printf("Delta = %d\n", delta);
        printf("Il n'existe aucune solution\n");
    }

    return 0;
}

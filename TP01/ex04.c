#include <stdio.h>
#include <math.h>

// function to calculate square root of delta
/* double sqrt(int delta)
{
    double r = delta;
    int i = 0;

    while (i < 50)
    {
        r = (r + delta / r) / 2;
        i = i + 1;
    }
    return r;
}
 */

// function to show one solution
// when delta = 0
void show_one_solution(int a, int b)
{
    // Initialisation and assignment
    double x = -b / (2 * a);
    
    // Display of the solution
    printf("Il existe 1 solution\n");
    printf("x = %.3lf\n", x);
}

// function to show two solutions
// when delta > 0
void show_two_solutions(int a, int b, int delta)
{
    // Initialisation then assignment
    double x1 = (-b - sqrt(delta)) / (2 * a);
    double x2 = (-b + sqrt(delta)) / (2 * a);

    // Display of the solutions
    printf("Il existe 2 solutions\n");
    printf("x1 = %.3lf\n", x1);
    printf("x2 = %.3lf\n", x2);
}

// function to display the results
void show_results(int a, int b, int c)
{
    int delta = b * b - 4 * a * c;

    // Tests according to the different delta cases
    printf("Delta = %d\n", delta);
    if (delta > 0)
        show_two_solutions(a, b, delta);
    else if (delta == 0)
        show_one_solution(a, b);
    else
        printf("Il n'existe aucune solution\n");
}

int main(void)
{
    // Variables declaration and assignment
    int a = 0;
    int b = 0;
    int c = 0;
    
    // Calling the function to display the results
    show_results(a, b, c);

    return 0;
}

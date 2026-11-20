#include <stdio.h>

// function to calculate square root of delta
double square_root(int delta)
{
    double r;
    int i;

    r = delta;
    i = 0;
    while (i < 50)
    {
        r = (r + delta / r) / 2;
        i = i + 1;
    }
    return r;
}

// function to show one solution
// when delta = 0
void show_one_solution(int a, int b)
{
    // Initialisation and assignment
    double x;

    x = -b / (2.0 * a);
    
    // Display of the solution
    printf("Il existe 1 solution\n");
    printf("x = %lf\n", x);
}

// function to show two solutions
// when delta > 0
void show_two_solutions(int a, int b, int delta)
{
    // Initialisation then assignment
    double x1;
    double x2;

    x1 = (-b - square_root(delta)) / (2.0 * a);
    x2 = (-b + square_root(delta)) / (2.0 * a);

    // Display of the solutions
    printf("Il existe 2 solutions\n");
    printf("x1 = %lf\n", x1);
    printf("x2 = %lf\n", x2);
}

// function to display the results
void show_results(int a, int b, int c)
{
    int delta;

    delta = b * b - 4 * a * c;

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
    int a = 5150;
    int b = 2155;
    int c = -4015;
    
    // Calling the function to display the results
    show_results(a, b, c);

    return 0;
}

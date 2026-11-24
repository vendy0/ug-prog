#include <math.h>
#include <stdio.h>

// function to show the result when a = 0
// the equation becomes bx + c = 0
void show_linear_solution(int b, int c)
{
    if (b == 0)
        return;

    double x = (double)-c / b;
    if (x == 0)
        x = 0.0; // avoids displaying "-0.000"

    printf("Il existe 1 solution\n");
    printf("x = %.3lf\n", x);
}

// function to show one solution
// when delta = 0 (a != 0)
void show_one_solution(int a, int b)
{
    double x = (double)-b / (2 * a); // cast avoids integer division
    if (x == 0)
        x = 0.0;

    printf("Il existe 1 solution\n");
    printf("x = %.3lf\n", x);
}

// function to show two solutions
// when delta > 0 (a != 0)
void show_two_solutions(int a, int b, int delta)
{
    double x1 = (-b - sqrt(delta)) / (2 * a);
    double x2 = (-b + sqrt(delta)) / (2 * a);

    printf("Il existe 2 solutions\n");
    printf("x1 = %.3lf\n", x1);
    printf("x2 = %.3lf\n", x2);
}

// function to display the results
void show_results(int a, int b, int c)
{
    // First degree equation: no discriminant needed
    if (a == 0)
    {
        show_linear_solution(b, c);
        return;
    }

    int delta = b * b - 4 * a * c;

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
    int a = 0;
    int b = 2;
    int c = -4;

    show_results(a, b, c);

    return 0;
}
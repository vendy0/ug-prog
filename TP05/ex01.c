int ft_recursive_factorial(int nbr)
{
    int i = nbr;
    int feedback = 1;

    if (nbr < 0)
        return 0;

    if (nbr <= 1)
        return 1;

    if (i > 1)
        feedback = ft_recursive_factorial(i - 1);
    return feedback * i;
}

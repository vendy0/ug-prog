int ft_iterative_factorial(int nbr)
{
    int result = 1;

    if (nbr < 0)
        return 0;
    while (nbr > 1)
    {
        result *= nbr;
        nbr--;
    }
    return result;
}

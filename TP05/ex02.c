
int ft_recursive_power(int nbr, int power)
{
    int i = 0;

    if (power < 0)
        return 0;
    else if (!(power))
        return 1;

    i = ft_recursive_power(nbr, power - 1);

    return i * nbr;
}

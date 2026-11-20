int ft_cumulative(int number)
{
    int sum = 0;

    for (int i = 1; i <= number; i++)
        sum += i;
    return sum;
}

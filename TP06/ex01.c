int ft_get_average(int tab[], int size)
{
    int sum = 0;

    if (size <= 0)
        return 0;

    for (int i = 0; i < size; i++)
    {
        sum += tab[i];
    }

    return sum / size;
}

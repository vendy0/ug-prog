int ft_fibonacci(int index)
{
    int i;
    int j;

    if (index < 0)
        return -1;
    else if (index == 0)
        return 0;
    else if (index == 1)
        return 1;

    i = ft_fibonacci(index - 1);
    j = ft_fibonacci(index - 2);

    return i + j;
}

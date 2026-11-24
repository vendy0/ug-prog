int ft_fibonacci(int index)
{
    int number_one;
    int number_two;

    if (index < 0)
        return -1;
    else if (index == 0)
        return 0;
    else if (index == 1)
        return 1;

    number_one = ft_fibonacci(index - 1);
    number_two = ft_fibonacci(index - 2);

    return number_one + number_two;
}

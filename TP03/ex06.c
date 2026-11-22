int ft_is_prime(int number)
{
    // If number is 0, 1 or a negative number, return 0
    if (number <= 1)
        return 0;

    // Check each integer i from 1 while i <= number / i.
    // dividers is incremented only if i divides number and is not 1.
    // So if there is a divider, number is not a prime number.
    for (int i = 2; i <= number / i; i++)
    {
        if (!(number % i))
            return 0;
    }
    return 1;
}

int ft_find_next_prime(int number)
{
    int i = number;

    if (number <= 2)
        return 2;

    while (1)
    {
        if (ft_is_prime(i))
            return i;
        i++;
    }
}

int ft_is_prime(int number)
{   
    int i;
    int dividers = 0;

    // If number is 0 or 1, return 0
    if (number <= 1)
        return 0;

    // Check each integer i from 1 while i * i <= number.
    // dividers is incremented only if i divides number and is not 1.
    // So if there is a divider, number is not a prime number.
    for (i = 1; i * i <= number; i++)
    {
        if (i != 1 && !(number % i))
            dividers++;
    }

    if (dividers)
        return 0;
    return 1;
}

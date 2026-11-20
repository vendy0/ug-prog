int ft_is_prime(int number);

int ft_find_next_prime(int number)
{
    int i;
    int next_prime;
    int prime_found = 0;

    for (i = number; !prime_found; i++)
    {
        if (ft_is_prime(i))
        {
            prime_found = !prime_found;
            next_prime = i;
        }
    }

    return next_prime;
}

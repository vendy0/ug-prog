int ft_is_even(int number)
{
    // If number is even, (number % 2) is 0, which is false,
    // so the function returns 1.
    // If number is odd, (number % 2) is not 0 (1, or -1 if negative),
    // which is true, so the function returns 0.
    return (number % 2) ? 0 : 1;
}

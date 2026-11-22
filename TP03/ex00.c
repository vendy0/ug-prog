int ft_power(int number, int power)
{
    int result = 0;

    if (power == 0)
        return 1;

    for (int i = 1; i <= power; i++)
    {
        if (result == 0)
            result++;
        result *= number;
    }  
    
    return result;
}

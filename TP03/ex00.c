int ft_power(int number, int power)
{
    int result = 0;
    int i;

    if (power == 0)
        return 1;

    for (i = 1; i <= power; i++)
    {
        if (result == 0)
            result += 1;
        result *= number;
    }  
    
    return result;
}

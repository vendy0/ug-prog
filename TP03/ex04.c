int	ft_sqrt(int number)
{
	// function to calculate square root of a number
    int i;
	int sqrt_root = -1;
    
    // Check each integer i from 0 while i * i <= number.
    // If i * i is exactly number, assign i to sqrt_root.
    // Otherwise, sqrt_root stays at -1, which is returned.
    for (i = 0; i * i <= number; i++)
    {
        if(i * i == number)
            sqrt_root = i;
    }

    return sqrt_root;
}

void ft_array_cpy(int src[], int dest[], int size)
{
    int index = 0;
    for (int i = size - 1; i >= 0; i--)
        dest[index++] = src[i];
}
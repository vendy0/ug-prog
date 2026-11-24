int ft_get_index(int tab[], int size, int search)
{
    if (size < 0)
        return -1;

    for (int i = 0; i < size; i++)
    {
        if (tab[i] == search)
            return i;
    }
    return -1;
}

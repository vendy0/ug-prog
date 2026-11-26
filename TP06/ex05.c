void ft_array_sort_asc(int tab[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int element = tab[i];
        int j = i;

        while (j > 0 && tab[j - 1] > element)
        {
            tab[j] = tab[j - 1];
            j--;
        }
        tab[j] = element;
    }
}

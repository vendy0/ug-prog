int ft_array_cmp(int tab1[], int size1, int tab2[], int size2)
{
    if (size1 != size2 || size1 < 0)
        return 0;

    for (int i = 0; i < size1; i++)
    {
        if (tab1[i] != tab2[i])
            return 0;
    }
    return 1;
}

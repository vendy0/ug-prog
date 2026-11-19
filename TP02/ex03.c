int ft_cumulative(int number)
{
    int i;
    int sum = 0;

    for (i = 1; i <= number; i++)
        sum += i;
    return sum;
}

int main(){
    ft_cumulative(5);
}

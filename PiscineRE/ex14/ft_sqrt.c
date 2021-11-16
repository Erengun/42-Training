int ft_sqrt(int nb)
{
    int i;

    i = 1;
    if (nb >= 2147483647)
        return 0;
    while (++i <= nb)
        if (i * i == nb)
            return (i);
    return 0;
}
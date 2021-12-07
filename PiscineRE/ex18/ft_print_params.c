void	ft_putchar(char c);

int main(int argc, char **argv)
{
    int i;

    i = 1;
    while(i < argc)
    {
        while(*argv[i])
        {
            ft_putchar(*argv[i]);
            argv[i]++;
        }
        i++;
        ft_putchar('\n');
    }
    return (0);
}
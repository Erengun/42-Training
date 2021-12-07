#include <unistd.h>

void	ft_putchar(char c)
{
    write(1,&c,1);
}

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
        ft_putchar('\n');
        i++;
    }
    return (0);
}

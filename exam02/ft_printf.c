#include <stdarg.h>
#include <unistd.h>

int	putnbr(unsigned nbr, char * s, int bs, int f)
{
	int d = 0;
	if (nbr == 0)
		return (write(1, "0", 1));

	if (!f)
	{
		if (nbr / bs !=0 )
			d += putnbr(nbr / bs, s, bs, f);
		return (d + write(1, s + nbr % bs,1));
	}
	if ((int)nbr < 0)
	{
		f = -1;
		d += write(1, "-", 1);
	}	
		if ((int)nbr / bs * f !=0 )
			d += putnbr((int)nbr / bs *f, s, bs, 0);
			return (d + write(1, s + (int)nbr % bs *f, 1));
}

int	mon(va_list *ls, char c)
{
	char *s;
	int	d = 0;
	int nbr = 0;
	if (c == 's')
	{
		s =va_arg(*ls, void *);
		if (!s)
			return write(1, "(null)", 6);
		while(*s)
			d += write(1, (s++), 1);
		return d;
	}
	else if (c == 'd')
		return putnbr(va_arg(*ls, int), "0123456789", 10, 1);
	else
		return putnbr(va_arg(*ls, int), "0123456789abcdef", 16, 0);
	return 0;
}

int	ft_printf(const char *s, ...)
{
	va_list ls;
	va_start(ls, s);
	int	i=0;

	while(*s)
	{
		if (*s == '%' && (*(s + 1) == 's' || *(s + 1) == 'd' || *(s + 1) == 'x'))
			i += mon(&ls, *(++s));
		else
		i += write(1, s, 1);
	s++;	
	}
	va_end(ls);
	return (i);
}
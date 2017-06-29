#include "ft_printf.h"

int ft_printf(const char * restrict str, ...)
{
	va_list ap;
	t_dat	d;
	d.tot = 0;
	int i = 0;
	int j = 0;
	void	*ptr;

	va_start(ap, str);
	ft_bzero(d.buff, 4000);
	while (str[j])
	{
		if (str[j] == '%')
		{
			d.c = ft_option(&str[j + 1], &d);
			if (d.c == 's')
			{
				d.s = va_arg(ap, char*);
				d.tot += count_cpy(&d.buff[d.tot], d.s);
				j += 2;
			}
			else if (d.c == 'c')
			{
				d.c = va_arg(ap, int);
				d.buff[d.tot] = (char)d.c;
				d.tot++;
				j += 2;
			}
			else if (d.c == 'd')
			{
				d.i = va_arg(ap, int);
				d.s = ft_itoa(d.i);
				i += count_cpy(&d.buff[d.tot], d.s);
				j += 2;
			}
			else if (d.c == 'p')
			{
				printf("test 1\n");
				ft_strcat(d.buff, "0x");
				d.tot += 2;
				printf("test 2\n");
				ptr = va_arg(ap, void*);
				printf("test 3\n");
				option_p(ptr, &d);
				printf("test 4\n");
				d.tot += d.p;
				j += 2;
			}
			else if (d.c == '%')
			{
				d.buff[d.tot] = str[j];
				d.tot++;
				j += 2;
			}
		}
		else
		{

			d.buff[d.tot] = str[j];
			d.tot++;
			j++;
		}
	}
	ft_putstr(d.buff);
	va_end(ap);
	return (0);
}

int	main(int ac, char **av)
{
	char	*toto = "wesh !";
	char 	c = 'x';
	int 	i = 55;
	printf("printf : %p\n", toto);
	ft_printf("ft_printf : %p\n", toto);
	return (0);	
}
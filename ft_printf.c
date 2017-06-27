#include <stdarg.h>
#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>

int count_cpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while(*s2)
	{
		*s1 = *s2;
		i++;
	}
	return (i);
}

int ft_printf(const char * restrict str, ...)
{
	va_list ap;
	t_printf	s;	
	int i = 0;
	int j = 0;

	va_start(ap, str);
	ft_bzero(s.buffer, 4000);
	while (str[j])
	{
		printf("test 1\n");
		if (str[j] == '%')
		{
			printf("test 2\n");
			if (str[j + 1] == 's')
			{
				printf("test 3\n");
				s.s = va_arg(ap, char*);
				i += count_cpy(&s.buffer[i], s.s);
				j += 2;
			}
			else if (str[j + 1] == 'c')
			{
				printf("test 4\n");
				s.c = va_arg(ap, int);
				s.buffer[i] = (char)s.c;
				i++;
				j += 2;
			}
			else if (str[j + 1] == 'd')
			{
				printf("test 5\n");
				s.i = va_arg(ap, int);
				s.s = ft_itoa(s.i);
				i += count_cpy(&s.buffer[i], s.s);
				j += 2;
			}
		}
		else
		{
			printf("test 6\n");
			s.buffer[i] = str[i];
			i++;
			j++;
		}
	}
	ft_putstr(s.buffer);
	return (0);
}

int	main(int ac, char **av)
{
	printf("printf : int %d string %s  char %c", 55, "toto !!", 'r');
	ft_printf("ft_printf : int %d string %s  char %c", 55, "toto !!", 'r');
	return (0);	
}
#include "ft_printf.h"

int	count_cpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	return (i);
}
t_dat		*ft_optioncore(t_dat *d)
{
	d->i = 0;
	while ((d->c = str[d->i]) != '\0')
	{
		if (c == 's' || c == 'S' || c == 'p' || c ==  'd' || c == 'D' ||
			 c == 'i' || c == 'o' || c == 'O' || c == 'u' || c == 'U' || c == 'x' ||
			 c == 'X' || c == 'c' || c == 'C')
			return (i);
			d->i++;
	}
	return (0);
}
//liste chainee pour stocker les options


int	ft_option(const char	*str, t_dat *d)
{
			
	
	return (0);
}

void    option_p(void *ptr, t_dat *d)
{
    d->l = (long)ptr;
    d->i = 0;
    d->c = 'a' - 10;
    d->l1 = d->l;
    while (d->l1)
    {
        d->l1 /= 16;
        d->i++;
    }
    d->p = d->i;
    d->i--;
    while (d->l)
    {
        d->t1 = d->l % 16;
        d->l /= 16;
        if (d->t1 > 9)
            d->buff[d->tot + d->i] = d->c + d->t1;
        else
            d->buff[d->tot + d->i] = d->t1 + 48;
        d->i--;
    }
}

//ft_precision_s handle the case '.' for a string
char	*ft_precision_s(char *str, char *buffer, int precision)
{
	int i;

	i = 0;
	while (i < precision)
	{
		buffer[i] = str[i];
	}
	return (buffer);
}
/*
//ft_precision_s handle the case '.' for an int
char	*ft_precision_int(char *str, char *buffer, int precision)
{
	
}
*/

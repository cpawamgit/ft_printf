#ifndef FT_PRINTF_H
# define FT_PRINTF_H

typedef struct		s_printf
{
	int				i;
	char			c;
	char			*s;
	char			buffer[4000];
}					t_printf;

#endif
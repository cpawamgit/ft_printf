#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <stdarg.h>
#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>

typedef struct     s_dat
{
    char        *s;
    char        buff[4000];
    char        c;
    char			option;
    int            i;
    int            j;
    int         p;
    int            t1;
    long        l;
    long        l1;
    int            tot;

}                t_dat;

int count_cpy(char *s1, char *s2);
char	*ft_precision_s(char *str, char *buffer, int precision);
char	*ft_precision_int(char *str, char *buffer, int precision);
char	ft_option(const char	*str, t_dat *s);
void    option_p(void *ptr, t_dat *d);

#endif
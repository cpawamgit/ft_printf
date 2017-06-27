/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 17:40:40 by cyrmorin          #+#    #+#             */
/*   Updated: 2016/11/12 17:40:42 by cyrmorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_set_to_zero(size_t *i, size_t *j, \
	unsigned char *a, unsigned char *b)
{
	*i = 0;
	*j = 0;
	*a = 0;
	*b = 0;
}

static void	ft_is_not_bzero(unsigned char a, unsigned char b, \
	size_t *i, size_t *j)
{
	if (b != '\0')
		*i = *i + 1;
	if (a != '\0')
		*j = *j + 1;
}

int			ft_strcmp(const char *s1, const char *s2)
{
	size_t			i;
	size_t			j;
	unsigned char	a;
	unsigned char	b;

	ft_set_to_zero(&i, &j, &a, &b);
	if (ft_strlen(s1) == 0 && ft_strlen(s2) == 0)
		return (0);
	if (ft_strlen(s1) == 0)
		return (((unsigned char)s2[i]) * -1);
	if (ft_strlen(s2) == 0)
		return (((unsigned char)s1[i]));
	while (s1[j] != '\0' || s2[i] != '\0')
	{
		a = ((unsigned char)s1[j]);
		b = ((unsigned char)s2[i]);
		if (a != b)
			return (a - b);
		ft_is_not_bzero(a, b, &i, &j);
	}
	return (0);
}

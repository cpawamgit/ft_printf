/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 23:37:33 by cyrmorin          #+#    #+#             */
/*   Updated: 2016/11/11 23:37:35 by cyrmorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const char		*s;
	char			*d;
	size_t			i;
	unsigned char	a;

	a = c;
	i = 0;
	s = src;
	d = dst;
	while (i < n)
	{
		a = s[i];
		d[i] = a;
		if (s[i] == c)
			return (&d[i + 1]);
		i++;
	}
	return (NULL);
}

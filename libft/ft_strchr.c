/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 19:58:54 by cyrmorin          #+#    #+#             */
/*   Updated: 2016/11/13 19:58:56 by cyrmorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	a;
	size_t			i;
	size_t			j;

	j = ft_strlen(s);
	a = c;
	i = 0;
	while (i <= j)
	{
		if (s[i] == a)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	return (NULL);
}

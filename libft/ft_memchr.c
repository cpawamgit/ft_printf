/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 20:43:37 by cyrmorin          #+#    #+#             */
/*   Updated: 2016/11/13 20:43:39 by cyrmorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*ret;

	i = 0;
	ret = s;
	while (i < n)
	{
		if (((unsigned char)ret[i]) == ((unsigned char)c))
			return (((void *)s + i));
		i++;
	}
	return (NULL);
}

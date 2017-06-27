/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 23:05:22 by cyrmorin          #+#    #+#             */
/*   Updated: 2016/11/13 23:05:25 by cyrmorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(s1);
	slen = ft_strlen(s2);
	if (size < dlen)
		return (size + slen);
	i = 0;
	while (s2[i] != '\0' && (dlen + i + 1) < size)
	{
		s1[dlen + i] = s2[i];
		i++;
	}
	s1[dlen + i] = '\0';
	return (dlen + slen);
}

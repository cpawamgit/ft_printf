/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 22:23:47 by cyrmorin          #+#    #+#             */
/*   Updated: 2016/11/07 22:23:50 by cyrmorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*cutstr;

	i = 0;
	if (s == NULL)
		return (NULL);
	cutstr = (char *)malloc(sizeof(char) * len + 1);
	if (cutstr)
	{
		while (i < len)
		{
			cutstr[i] = s[start + i];
			i++;
		}
		cutstr[i] = '\0';
		return (cutstr);
	}
	else
		return (NULL);
}

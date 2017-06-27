/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 20:23:08 by cyrmorin          #+#    #+#             */
/*   Updated: 2016/11/13 20:23:10 by cyrmorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	a;
	int		i;

	a = c;
	i = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	while (i >= 0)
	{
		if (((char)s[i]) == a)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (NULL);
}

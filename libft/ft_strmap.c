/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 21:12:44 by cyrmorin          #+#    #+#             */
/*   Updated: 2016/11/07 21:12:46 by cyrmorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strmap(const char *s, char (*f)(char))
{
	int		i;
	int		j;
	char	*cpy;

	i = 0;
	j = 0;
	if (s == NULL && f == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		i++;
	}
	cpy = (char *)malloc(sizeof(char) * i + 1);
	if (cpy)
	{
		while (s[j] != '\0')
		{
			cpy[j] = f(s[j]);
			j++;
		}
		cpy[j] = '\0';
		return (cpy);
	}
	else
		return (NULL);
}

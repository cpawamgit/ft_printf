/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 22:54:08 by cyrmorin          #+#    #+#             */
/*   Updated: 2016/11/07 22:54:10 by cyrmorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*concatstr;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	concatstr = (char *)malloc(sizeof(char) * \
		(ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!concatstr)
		return (NULL);
	while (s1[i] != '\0')
	{
		concatstr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		concatstr[i] = s2[j];
		i++;
		j++;
	}
	concatstr[i] = '\0';
	return (concatstr);
}

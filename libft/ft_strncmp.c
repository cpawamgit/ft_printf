/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 17:49:35 by cyrmorin          #+#    #+#             */
/*   Updated: 2016/11/12 17:49:38 by cyrmorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if ((ft_strlen(s1) == 0 && ft_strlen(s2) == 0) || n == 0)
		return (0);
	if (ft_strlen(s1) == 0)
		return (((unsigned char)s2[0] * -1));
	if (ft_strlen(s2) == 0)
		return (((unsigned char)s1[i]));
	while ((s1[i] != '\0' || s2[j] != '\0') && i < n)
	{
		if (((unsigned char)s1[i]) != ((unsigned char)s2[j]))
			return (((unsigned char)s1[i]) - ((unsigned char)s2[j]));
		if (s1[i] != '\0')
			i++;
		if (s2[j] != '\0')
			j++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 21:01:32 by cyrmorin          #+#    #+#             */
/*   Updated: 2016/11/25 21:01:34 by cyrmorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_reset_and_increment(size_t *j, size_t *i)
{
	*j = 0;
	*i = *i + 1;
}

char		*ft_strnstr(const char *str, const char *tofind, size_t len)
{
	size_t i;
	size_t j;
	size_t lentofind;

	i = 0;
	j = 0;
	if (ft_strlen(tofind) == 0)
		return ((char *)str);
	if (ft_strlen(tofind) > ft_strlen(str))
		return (NULL);
	lentofind = ft_strlen(tofind);
	while (str[i] != '\0' && i < len)
	{
		if (tofind[j] == str[i + j])
		{
			while (tofind[j] == str[i + j] && str[i + j] != '\0' && i + j < len)
			{
				j++;
			}
			if (j == lentofind)
				return ((char *)str) + i;
		}
		ft_reset_and_increment(&j, &i);
	}
	return (NULL);
}

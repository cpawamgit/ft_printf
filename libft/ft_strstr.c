/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 19:54:04 by cyrmorin          #+#    #+#             */
/*   Updated: 2016/11/25 19:54:05 by cyrmorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_set_to_zero(size_t *i, size_t *j)
{
	*i = 0;
	*j = 0;
}

char		*ft_strstr(const char *str, const char *tofind)
{
	size_t i;
	size_t j;
	size_t lentofind;

	ft_set_to_zero(&i, &j);
	if (ft_strlen(tofind) == 0)
		return ((char *)str);
	if (ft_strlen(tofind) > ft_strlen(str))
		return (NULL);
	lentofind = ft_strlen(tofind);
	while (str[i] != '\0')
	{
		if (tofind[j] == str[i + j])
		{
			while (tofind[j] == str[i + j] && str[i + j] != '\0')
			{
				j++;
			}
			if (j == lentofind)
				return ((char *)str) + i;
		}
		j = 0;
		i++;
	}
	return (NULL);
}

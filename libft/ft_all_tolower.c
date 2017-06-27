/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all_tolower.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 13:57:06 by cyrmorin          #+#    #+#             */
/*   Updated: 2016/12/01 13:57:08 by cyrmorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_all_tolower(char *str)
{
	size_t i;

	i = 0;
	if (str != NULL)
	{
		while (str[i] != '\0')
		{
			if (ft_isupper(str[i]) == 1)
				str[i] = ft_tolower(str[i]);
			i++;
		}
		return (str);
	}
	else
		return (NULL);
}

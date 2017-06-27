/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_point.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 13:55:18 by cyrmorin          #+#    #+#             */
/*   Updated: 2016/12/01 13:55:23 by cyrmorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_insert_point(char *str)
{
	char *new;

	new = NULL;
	if (str == NULL)
		return (NULL);
	if (str[ft_strlen(str) - 1] != '.')
	{
		new = (char*)malloc(sizeof(char) * ft_strlen(str) + 2);
		if (new)
		{
			ft_strcpy(new, str);
			new[ft_strlen(str)] = '.';
			new[ft_strlen(str) + 1] = '\0';
		}
	}
	else
		return (str);
	return (new);
}

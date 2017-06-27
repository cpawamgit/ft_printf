/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 16:53:35 by cyrmorin          #+#    #+#             */
/*   Updated: 2016/11/25 16:53:38 by cyrmorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iswspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

static void	ft_totalw(const char *str, size_t *i, size_t *j, size_t *k)
{
	*i = 0;
	*j = 0;
	*k = 0;
	while (ft_iswspace(str[*i]))
		*i = *i + 1;
	while (ft_iswspace(str[ft_strlen(str) - *k - 1]))
	{
		*j = *j + 1;
		*k = *k + 1;
	}
	*k = 0;
}

static char	*ft_alloc(const char *s, char *trimstr, size_t i, size_t j)
{
	if (i != j)
		trimstr = (char *)malloc(sizeof(char) * ft_strlen(s) + 1 - i - j);
	else
		trimstr = (char *)malloc(sizeof(char) * ft_strlen(s) + 1 - i);
	return (trimstr);
}

char		*ft_strtrim(const char *s)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*trimstr;

	trimstr = NULL;
	if (s == NULL)
		return (NULL);
	ft_totalw(s, &i, &j, &k);
	trimstr = ft_alloc(s, trimstr, i, j);
	if (trimstr && s != NULL)
	{
		if ((i + j) >= ft_strlen(s))
			trimstr[k] = '\0';
		else
			while (k < ft_strlen(s) - i - j)
			{
				trimstr[k] = s[k + i];
				k++;
			}
		trimstr[k] = '\0';
		return (trimstr);
	}
	else
		return (NULL);
}

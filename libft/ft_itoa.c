/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 17:18:47 by cyrmorin          #+#    #+#             */
/*   Updated: 2016/11/25 17:18:51 by cyrmorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_isposorneg(int *n, int *i)
{
	if (*n < 0)
	{
		*i = 1;
		*n = *n * -1;
	}
	else
		*i = 0;
}

static void	ft_get_power_and_block(int *power, int *block, int n)
{
	*power = 1;
	*block = 1;
	while (*power <= n / 10)
	{
		*power = *power * 10;
		*block = *block + 1;
	}
}

static char	*ft_intmin(void)
{
	char *result;

	result = (char *)malloc(sizeof(char) * 12);
	ft_strcpy(result, "-2147483648");
	return (result);
}

static void	ft_isneg(char *result, int *block)
{
	result[0] = '-';
	*block = *block + 1;
}

char		*ft_itoa(int n)
{
	int		i;
	int		power;
	int		block;
	char	*result;

	if (n == -2147483648)
		return (ft_intmin());
	ft_isposorneg(&n, &i);
	ft_get_power_and_block(&power, &block, n);
	result = (char *)malloc(sizeof(char) * block + 1 + i);
	if (!result)
		return (NULL);
	if (i == 1)
		ft_isneg(result, &block);
	while (i < block)
	{
		result[i] = n / power + 48;
		n = n % power;
		power = power / 10;
		i++;
	}
	result[i] = '\0';
	return (result);
}

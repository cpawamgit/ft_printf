/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 18:17:49 by cyrmorin          #+#    #+#             */
/*   Updated: 2016/11/25 18:17:51 by cyrmorin         ###   ########.fr       */
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
	*block = 1;
	*power = 1;
	while (*power <= n / 10)
	{
		*power = *power * 10;
		*block = *block + 1;
	}
}

void		ft_putnbr(int n)
{
	int		i;
	int		power;
	int		block;
	char	c;

	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		ft_isposorneg(&n, &i);
		ft_get_power_and_block(&power, &block, n);
		if (i == 1)
		{
			write(1, "-", 1);
			block = block + 1;
		}
		while (i < block)
		{
			c = n / power + 48;
			n = n % power;
			power = power / 10;
			i++;
			write(1, &c, 1);
		}
	}
}

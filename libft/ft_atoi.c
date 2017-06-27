/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 16:58:18 by cyrmorin          #+#    #+#             */
/*   Updated: 2016/11/25 16:58:33 by cyrmorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_is_plus_less(char c)
{
	if (c == '-')
		return (1);
	if (c == '+')
		return (2);
	return (0);
}

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\v' || c == '\f' || c == '\r' || c == '\n' || \
		c == '\t')
		return (1);
	return (0);
}

static int	ft_is_number(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int i;
	int j;
	int result;

	i = 0;
	j = 1;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	if (!(ft_is_number(str[i])) && !(ft_is_plus_less(str[i])))
		return (0);
	if (ft_is_plus_less(str[i]) == 1)
	{
		j = j * -1;
		i++;
	}
	else if (ft_is_plus_less(str[i]) == 2)
		i++;
	while (ft_is_number(str[i]))
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * j);
}

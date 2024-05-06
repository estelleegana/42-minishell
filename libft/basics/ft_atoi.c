/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:29:36 by estegana          #+#    #+#             */
/*   Updated: 2023/05/22 18:57:11 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft.h"

static double	ft_atoidouble(char *str, int i)
{
	double	j;
	double	a;

	j = 1;
	a = 0;
	while (ft_isdigit(str[i]))
	{
		j = j / 10;
		a = a + str[i] - 48 * j;
		i++;
	}
	return (a);
}

double	ft_atoi(char *str)
{
	int		i;
	int		sign;
	double	res;
	double	a;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	if (str[i] == '.')
		i++;
	a = ft_atoidouble(str, i);
	return (sign * (res + a));
}

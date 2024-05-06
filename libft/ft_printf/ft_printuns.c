/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuns.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:47:02 by estegana          #+#    #+#             */
/*   Updated: 2023/10/17 17:47:04 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft.h"

int	ft_unslen(unsigned int num)
{
	int	i;

	i = 0;
	while (num != 0)
	{
		i++;
		num = num / 10;
	}
	return (i);
}

char	*ft_unsitoa(unsigned int nb)
{
	int		i;
	char	*res;

	i = ft_unslen(nb);
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (!res)
		return (0);
	res[i] = '\0';
	i--;
	while (nb != 0)
	{
		res[i] = nb % 10 + '0';
		nb /= 10;
		i--;
	}
	return (res);
}

int	ft_putuns(unsigned int nb)
{
	int		len;
	char	*num;

	len = 0;
	if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	num = ft_unsitoa(nb);
	if (!num)
		return (0);
	len = ft_putstr(num);
	free(num);
	return (len);
}

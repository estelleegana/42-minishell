/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:16:00 by estegana          #+#    #+#             */
/*   Updated: 2023/10/17 13:16:02 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft.h"

int	ft_nblen(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb)
	{
		i++;
		nb = nb / 16;
	}
	return (i);
}

void	ft_printhexa(unsigned int nb, char c)
{
	char		*base;
	long int	n;

	n = (long int)nb;
	if (c == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n > 15)
		ft_printhexa(n / 16, c);
	ft_putchar(base[n % 16]);
}

int	convert_hexa(unsigned int nb, char c)
{
	ft_printhexa(nb, c);
	return (ft_nblen(nb));
}

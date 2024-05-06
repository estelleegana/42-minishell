/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:04:36 by estegana          #+#    #+#             */
/*   Updated: 2023/11/09 13:31:16 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft.h"

int	ft_nbrlen(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i = i + 1;
	if (n == 0)
		i++;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*s;
	size_t		i;
	long int	nb;
	int			neg;

	i = ft_nbrlen(n);
	s = (char *)malloc(sizeof(char) * (i + 1));
	if (!s)
		return (NULL);
	nb = n;
	neg = 0;
	if (nb < 0)
	{
		nb = nb * (-1);
		s[0] = '-';
		neg = 1;
	}
	s[i] = '\0';
	while (i > (size_t) neg)
	{
		s[i - 1] = (nb % 10) + 48;
		nb = nb / 10;
		i--;
	}
	return (s);
}

int	ft_putnbr(int nb)
{
	int		nbr;
	char	*str;

	nbr = 0;
	str = ft_itoa(nb);
	if (!str)
		return (0);
	ft_putstr(str);
	nbr = ft_strlen(str);
	free(str);
	return (nbr);
}

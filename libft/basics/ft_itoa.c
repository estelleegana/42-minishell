/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 17:56:02 by estegana          #+#    #+#             */
/*   Updated: 2023/05/29 19:00:53 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft.h"

size_t	digitcounter(long int n)
{
	size_t	i;

	i = 1;
	if (n < 0)
		i++;
	while (n / 10 != 0)
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

	i = digitcounter((long) n);
	s = (char *)malloc(sizeof(char) * (i + 1));
	if (!s)
		return (NULL);
	nb = (long) n;
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:16:24 by estegana          #+#    #+#             */
/*   Updated: 2023/10/17 13:16:27 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft.h"

int	ft_printptr(unsigned long p)
{
	char	*base;
	char	res[20];
	int		len;
	int		i;

	i = 0;
	len = 0;
	base = "0123456789abcdef";
	if (p == 0)
		return (ft_putstr("(nil)"));
	write(1, "0x", 2);
	len += 2;
	while (p)
	{
		res[i++] = base[p % 16];
		p /= 16;
	}
	while (i--)
		len += ft_putchar(res[i]);
	return (len);
}

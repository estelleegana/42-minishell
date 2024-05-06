/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:24:36 by estegana          #+#    #+#             */
/*   Updated: 2023/05/29 21:49:29 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	unsigned char	*a;
	size_t			j;

	a = (unsigned char *)big;
	i = 0;
	if (len == 0 && !big)
		return (0);
	if (little[i] == '\0')
		return ((char *)big);
	while (a[i] != '\0' && i < len)
	{
		j = 0;
		if (a[i] == little[j])
		{
			while (a[i + j] == little[j] && i + j < len)
			{
				j++;
				if (little[j] == '\0')
					return (&((char *)big)[i]);
			}
		}
		i++;
	}
	return (0);
}

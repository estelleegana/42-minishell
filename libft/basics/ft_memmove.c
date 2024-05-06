/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:54:02 by estegana          #+#    #+#             */
/*   Updated: 2023/05/22 18:52:24 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!src && !dest)
		return (0);
	i = 0;
	if ((size_t)dest - (size_t)src < n)
	{
		i = n - 1;
		while (n > i)
		{
			(((unsigned char *)dest)[i]) = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (n > i)
		{
			(((unsigned char *)dest)[i]) = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

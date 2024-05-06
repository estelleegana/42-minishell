/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:33:57 by estegana          #+#    #+#             */
/*   Updated: 2023/05/18 18:53:09 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*x;
	char	*tab;

	tab = (char *) dest;
	x = (char *) src;
	i = 0;
	if (!src && !dest)
		return (NULL);
	while (i < n)
	{
		tab[i] = x[i];
		i++;
	}
	return (dest);
}

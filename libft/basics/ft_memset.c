/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:21:32 by estegana          #+#    #+#             */
/*   Updated: 2023/05/15 17:39:19 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	char_from_asciicode;
	char			*tab;

	tab = (char *) s;
	char_from_asciicode = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		tab[i] = char_from_asciicode;
		i++;
	}
	return (s);
}

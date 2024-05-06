/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 19:21:29 by estegana          #+#    #+#             */
/*   Updated: 2023/05/29 19:44:55 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*mem;

	if (size >= SIZE_MAX || nmemb >= SIZE_MAX || (nmemb * size) >= SIZE_MAX)
		return (NULL);
	if (size != 0 && nmemb != 0)
	{
		if ((size * nmemb) < size || (size * nmemb) < nmemb)
			return (NULL);
	}
	mem = malloc(nmemb * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, (nmemb * size));
	return (mem);
}

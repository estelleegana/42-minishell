/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:15:50 by estegana          #+#    #+#             */
/*   Updated: 2023/06/21 16:46:49 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		t_dest;
	size_t		t_src;

	j = 0;
	t_src = ft_strlen(src);
	if (size == 0 && !dst)
		return (t_src);
	t_dest = ft_strlen(dst);
	i = t_dest;
	if (size <= t_dest)
		return (size + t_src);
	while (src[j] != '\0' && i + 1 < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[j]));
}

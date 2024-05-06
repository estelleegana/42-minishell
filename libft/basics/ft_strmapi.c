/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:39:06 by estegana          #+#    #+#             */
/*   Updated: 2023/05/29 19:31:24 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*sm;
	size_t	len;
	size_t	i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	sm = (char *)(malloc(sizeof(char) * (len + 1)));
	if (!sm)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sm[i] = f(i, s[i]);
		i++;
	}
	sm[i] = '\0';
	return (sm);
}

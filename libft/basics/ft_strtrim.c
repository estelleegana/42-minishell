/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:04:56 by estegana          #+#    #+#             */
/*   Updated: 2023/06/13 17:05:37 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft.h"

int	isins(char c, char const *s)
{
	while (*s)
	{
		if (c == *s)
			return (1);
		s++;
	}
	return (0);
}

int	count(char const *s1, char const *set)
{
	int	debut;
	int	i;
	int	fin;

	debut = 0;
	i = 0;
	fin = 0;
	while (isins(s1[i], set))
	{
		debut++;
		i++;
	}
	while (s1[i])
		i++;
	while (isins(s1[i - fin - 1], set) && (i - fin - 1) > 0)
		fin++;
	return (i - (debut + fin));
}

char	*strvide(void)
{
	char	*str;

	str = malloc(sizeof(char) * 1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*strim;

	if (!s1 || !set)
		return (NULL);
	i = count(s1, set);
	if (i < 1)
		return (strvide());
	strim = malloc(sizeof(char) * (i + 1));
	if (!strim)
		return (NULL);
	j = 0;
	k = 0;
	while (isins(s1[j], set))
		j++;
	while (k < i)
	{
		strim[k] = s1[j + k];
		k++;
	}
	strim[k] = '\0';
	return (strim);
}

/*int main(int ac, char **av)
{
	(void)ac;
	printf("%s", ft_strtrim(av[1], av[2]));
	return 0;
}*/

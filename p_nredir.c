/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_nredir.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 20:07:33 by estegana          #+#    #+#             */
/*   Updated: 2024/10/04 16:17:58 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_nredir(void)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s()->p.tokens[i])
	{
		if (!ft_strcmp(s()->p.tokens[i], "<") || !ft_strcmp(s()->p.tokens[i], ">"))
			count++;
		i++;
	}
	s()->p.nredir = count;
	printf("p.nredir = %d\n", s()->p.nredir);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_nhd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:24:58 by estegana          #+#    #+#             */
/*   Updated: 2024/10/04 16:17:50 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_nhd(void)
{

	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s()->p.tokens[i])
	{
		if (!ft_strcmp(s()->p.tokens[i], "<<"))
			count++;
		i++;
	}
	s()->p.nhd = count;
	printf("p.nhd = %d\n", s()->p.nhd);
	return (0);
}

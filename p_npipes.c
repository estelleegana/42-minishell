/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_npipes.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:48:18 by estegana          #+#    #+#             */
/*   Updated: 2024/10/04 16:17:54 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_npipes(void)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s()->p.input[i])
	{
		if (s()->p.input[i] == '|')
			count++;
		i++;
	}
	s()->p.npipes = count;
	printf("p.npipes = %d\n", s()->p.npipes);
	return (0);
}

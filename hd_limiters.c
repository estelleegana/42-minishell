/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hd_limiters.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:01:40 by estegana          #+#    #+#             */
/*   Updated: 2024/09/24 20:10:29 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_limiters(void)
{
	unsigned i;
	unsigned j;

	printf("*** limiters (boucle a inclure) ***\n");
	i = 0;
	j = 0;
	while (s()->p.tokens[i])
	{
		if (!ft_strcmp(s()->p.tokens[i], "<<"))
		{
			i++;
			//s()->e.limiters[j] = s()->p.tokens[i];
			//printf("limiter[%d]: %s\n", j, s()->e.limiters[j]);
			j++;
		}
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_ntokens.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:17:03 by estegana          #+#    #+#             */
/*   Updated: 2024/06/20 16:53:06 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_ntokens(void)
{
	printf("------------ comptage des tokens ------------\n");
	unsigned int	i;

	i = 0;
	while (s()->p.tokens[i])
		i++;
	s()->p.ntokens = i;
	printf("p.ntokens = %d\n", s()->p.ntokens);
	return (0);
}


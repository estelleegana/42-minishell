/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_ntokens.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:17:03 by estegana          #+#    #+#             */
/*   Updated: 2024/09/21 18:37:57 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_ntokens(void)
{
	unsigned int	i;
	unsigned int	j;

	printf("*** combien de tokens? ***\n");
	i = 0;
	while (s()->p.tokens[i])
		i++;
	s()->p.ntokens = i;
	printf("p.ntokens = %d\n", s()->p.ntokens);
	j =0;
	while (s()->p.tokens[j])
	{
		printf("token[%d] : %s\n", j, s()->p.tokens[j]);
		j++;
	}
	return (0);
}


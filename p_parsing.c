/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_parsing.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:21:38 by estegana          #+#    #+#             */
/*   Updated: 2024/05/23 14:19:28 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_parsing(void)
{
	int i;

	s()->p.tokens = ft_split(s()->p.input, ' ');
	i = 0;
	while (s()->p.tokens[i])
		i++;
	s()->p.ntokens = i;
	//printf("p.input = %s\n", s()->p.input);
	//printf("p.ntokens = %d\n", s()->p.ntokens);
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_parsing.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:21:38 by estegana          #+#    #+#             */
/*   Updated: 2024/05/31 20:26:57 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_parsing(void)
{
	int i;

	ft_tokenize();
	s()->p.tokens = ft_split(s()->p.input, ' ');
	i = 0;
	while (s()->p.tokens[i])
		i++;
	s()->p.ntokens = i;
	printf("p.input = %s\n", s()->p.input);
	printf("p.ntokens = %d\n", s()->p.ntokens);
	return 0;
}

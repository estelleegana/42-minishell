/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_parsing.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:21:38 by estegana          #+#    #+#             */
/*   Updated: 2024/09/21 16:18:30 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_parsing(void)
{
	int	i;

	printf("------------- PARSING ------------------\n");
	printf("p.input = %s\n", s()->p.input);
	//ft_strtok();
	s()->p.tokens = ft_split(s()->p.input, ' ');//simple split par SPACE si jamais ft_strtok marche pas
	i =0;
	while (s()->p.tokens[i])
	{
		printf("token[%d] : %s\n", i, s()->p.tokens[i]);
		i++;
	}
	ft_ntokens();
	ft_npipes();
	return 0;
}

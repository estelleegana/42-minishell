/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_parsing.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:21:38 by estegana          #+#    #+#             */
/*   Updated: 2024/09/21 15:47:12 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_parsing(void)
{
	printf("------------- PARSING ------------------\n");
	printf("p.input = %s\n", s()->p.input);
	//ft_strtok();
	s()->p.tokens = ft_split(s()->p.input, ' ');//simple split par SPACE si jamais ft_strtok marche pas
	printf("token[0] : %s\n", s()->p.tokens[0]);
	printf("token[1] : %s\n", s()->p.tokens[1]);
	printf("token[2] : %s\n", s()->p.tokens[2]);
	ft_ntokens();
	ft_npipes();
	return 0;
}

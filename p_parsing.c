/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_parsing.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:21:38 by estegana          #+#    #+#             */
/*   Updated: 2024/09/21 18:41:39 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_parsing(void)
{
	printf("\n------------- PARSING ------------------\n");
	//ft_strtok();
	s()->p.tokens = ft_split(s()->p.input, ' ');//simple split par SPACE si jamais ft_strtok marche pas
	ft_ntokens();
	ft_npipes();
	ft_nhd();
	return 0;
}

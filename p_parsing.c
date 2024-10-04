/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_parsing.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:21:38 by estegana          #+#    #+#             */
/*   Updated: 2024/10/04 15:36:47 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_parsing(void)
{
	printf("\n\t\033[1m------------- PARSING ------------------\033[0m\n");
	s()->p.tokens = ft_split(s()->p.input, ' ');//simple split par SPACE si jamais ft_strtok marche pas
	ft_ntokens();
	ft_npipes();
	ft_nhd();
	ft_nredir();
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_parsing.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:21:38 by estegana          #+#    #+#             */
/*   Updated: 2024/06/28 18:48:29 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_parsing(void)
{
	printf("\n------------ ENTREE DANS LE PARSING ------------\n");
	printf("p.input = %s\n", s()->p.input);
	//ft_strtok();
	s()->p.tokens = ft_split(s()->p.input, ' ');//simple split par SPACE si jamais ft_strtok marche pas
	ft_ntokens();
	ft_npipes();
	return 0;
}

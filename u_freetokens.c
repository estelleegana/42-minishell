/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_freetokens.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 18:47:54 by estegana          #+#    #+#             */
/*   Updated: 2024/05/20 15:34:33 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_freetokens(void)
{
	size_t	i;

	i = 0;
	while (s()->p.tokens[i])
	{
		free(s()->p.tokens[i]);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_freeparsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 19:31:26 by estegana          #+#    #+#             */
/*   Updated: 2024/05/23 15:03:29 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_freeparsing(void)
{
	free(s()->p.input);
	//free(s()->p.ntokens);
	ft_freetokens();
	return (0);
}

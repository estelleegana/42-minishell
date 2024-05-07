/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aaa_minishell.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:46:44 by estegana          #+#    #+#             */
/*   Updated: 2024/05/07 17:59:34 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_minishell(void)
{
	char	cmd[10];

	while (1)
	{
		printf(PROMPT);
		ft_parsing();
		ft_exec();
	}
	return (0);
}

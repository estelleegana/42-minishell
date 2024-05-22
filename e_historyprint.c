/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_historyprint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:05:29 by estegana          #+#    #+#             */
/*   Updated: 2024/05/22 19:59:12 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_historyprint(void)
{
	unsigned int	i;

	i = 1;
	if (ft_strcmp(s()->p.tokens[0], "history"))
		return (-1);
	while (i < s()->h.count)
	{
		printf("%d %s\n", i, s()->h.cmds[i]);
		i++;
	}
	return (0);
}

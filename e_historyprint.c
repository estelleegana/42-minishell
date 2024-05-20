/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_historyprint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:05:29 by estegana          #+#    #+#             */
/*   Updated: 2024/05/20 19:37:13 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_historyprint(void)
{
	if (ft_strcmp(s()->p.tokens[0], "history"))
		return (-1);
	while (s()->h.nb)
	{
		printf("%d %s\n", s()->h.nb, s()->h.cmd);
		s()->h = *s()->h.next;
	}
	return (0);
}

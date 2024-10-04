/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_exec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:08:00 by estegana          #+#    #+#             */
/*   Updated: 2024/10/04 15:37:11 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_exec(t_list *list)
{
	printf("\n\t\033[1m------------- EXECUTION -------------\033[0m\n");
	while (list)
	{
		if (ft_is_hd())
		{
			ft_hd();
			ft_loop(list);
		}
		else
			ft_loop(list);
		list = list->next;
	}
	return (0);
}

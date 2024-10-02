/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_child.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:49:06 by estegana          #+#    #+#             */
/*   Updated: 2024/10/02 21:20:30 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_child(t_list *list)
{

	if (list->pipes > 0)
	{
		printf("*** entree child AVEC PIPE ***\n");
		dup2(list->fd[1], 1);
		close(list->fd[0]);
	}
	printf("*** entree child SANS PIPE ***\n");
	ft_execute(list);
	return (0);
}

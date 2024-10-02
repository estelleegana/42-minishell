/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_pipe.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:52:27 by estegana          #+#    #+#             */
/*   Updated: 2024/10/02 22:35:16 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_pipe(t_list *list)
{
	if (pipe(list->fd) == -1)
		printf("pipe error\n");
	list->pid = fork();
	if (list->pid == -1)
		return (0);
	else if (list->pid == 0)
		ft_child(list);
	else
		ft_parent(list);
	//close(list->fd[0]);
	//close(list->fd[1]);
	//list = list->next;
	return (0);
}

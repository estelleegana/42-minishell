/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_parent.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:51:17 by estegana          #+#    #+#             */
/*   Updated: 2024/10/02 21:27:58 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_parent(t_list *list)
{
	int status;
	pid_t childpid;

	childpid = waitpid(list->pid, & status, 0);
	if (childpid == -1)
		return (printf("waitpid failed\n"), 1);
	if (list->pipes > 0)
	{
		printf("*** entree parent AVEC PIPE ***\n");
		dup2(list->fd[0], 0);
		close(list->fd[1]);
		ft_execute(list->next);
	}
	else
		printf("*** entree parent SANS PIPE ***\n");
	return (0);
}

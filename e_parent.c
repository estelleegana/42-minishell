/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_parent.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:51:17 by estegana          #+#    #+#             */
/*   Updated: 2024/10/04 15:45:28 by estegana         ###   ########.fr       */
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
		printf("*** parent 2 cmd ***\n");
		dup2(list->fd[0], 0);
		close(list->fd[1]);
		ft_execute(list->next);
	}
	else
		printf("*** parent sans pipe ***\n");
	return (0);
}

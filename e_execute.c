/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_execute.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:49:49 by estegana          #+#    #+#             */
/*   Updated: 2024/10/02 21:22:01 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_execute(t_list *list)
{
	printf("commande = %s\n", list->cmd);
	list->path = cmdpath(list->cmd);
	printf("e.path : %s\n", list->path);
	if (execve(list->path, list->args, s()->e.env) == -1)
	{
		ft_putstr_fd("minishell: command not found: ", 2);
		ft_putendl_fd(list->cmd, 2);
		exit(127);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_builtins.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:52:42 by estegana          #+#    #+#             */
/*   Updated: 2024/10/02 21:09:44 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_builtins(t_list *list)
{
	if (!ft_strcmp(list->cmd, "cd"))
		return (ft_cd(), 1);
	else if (!ft_strcmp(list->cmd, "echo"))
		return (ft_echo(), 1);
	else if (!ft_strcmp(list->cmd, "exit"))
		return (ft_exit(), 1);
	else if (!ft_strcmp(list->cmd, "export"))
		return (ft_export(), 1);
	else if (!ft_strcmp(list->cmd, "pwd"))
		return (ft_pwd(), 1);
	else if (!ft_strcmp(list->cmd, "unset"))
		return (ft_unset(), 1);
	return (0);
}

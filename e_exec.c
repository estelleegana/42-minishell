/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_exec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:23:45 by estegana          #+#    #+#             */
/*   Updated: 2024/05/20 19:31:59 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_exec(void)
{
	//if (execve(path, s()->p.tokens, s()->env) == -1)
	//{
	//	ft_putstr_fd("minishell: command not found: ", 2);
	//	ft_putendl_fd(s()->p.tokens[0], 2);
	//	ft_freelist(s()->p.tokens);
	//	exit(127);
	//}
	ft_exit();
	ft_historyprint();
	return 0;
}

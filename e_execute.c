/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_execute.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:49:49 by estegana          #+#    #+#             */
/*   Updated: 2024/09/27 22:00:29 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_execute(void)
{
	int i;

	i = 0;
	s()->e.cmd = s()->p.tokens[i];
	i++;
	printf("e.cmd = %s\n", s()->e.cmd);
	s()->e.path = cmdpath(s()->e.cmd);
	printf("e.path : %s\n", s()->e.path);
	if (execve(s()->e.path, s()->e.args, s()->e.env) == -1)
	{
		ft_putstr_fd("minishell: command not found: ", 2);
		ft_putendl_fd(s()->e.cmd, 2);
		exit(127);
	}
	return (0);
}

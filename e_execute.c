/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_execve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:49:49 by estegana          #+#    #+#             */
/*   Updated: 2024/09/21 15:49:35 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_execute(void)
{
	s()->e.path = cmdpath(s()->p.tokens[0]);
	printf("e.path : %s\n", s()->e.path);
	printf("p.tokens : %s\n", s()->p.tokens[0]);
	if (execve(s()->e.path, s()->p.tokens, s()->env) == -1)
	{
		ft_putstr_fd("minishell: command not found: ", 2);
		ft_putendl_fd(s()->p.tokens[0], 2);
		exit(127);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_loop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:19:28 by estegana          #+#    #+#             */
/*   Updated: 2024/09/27 22:07:55 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_loop(void)
{
	printf("*** entree boucle ***\n");
	if (ft_builtins())
		return (0);
//if (s()->p.ntokens == 4)
	else
	{
		//ft_initialize_exec();
		if (pipe(s()->e.fd) == -1)
			printf("pipe error\n");
		s()->e.pid = fork();
		if (s()->e.pid == -1)
			return (0);
		else if (s()->e.pid == 0)
			ft_child();
		else
			ft_parent();
		//close(s()->e.fd[0]);
		//close(s()->e.fd[1]);
	}
	return (0);
}

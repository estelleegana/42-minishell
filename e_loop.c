/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_loop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:19:28 by estegana          #+#    #+#             */
/*   Updated: 2024/09/22 21:12:17 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_loop(void)
{
	printf("*** entree boucle ***\n");
	if (ft_builtins())
		return (0);
	else
	{
		//ft_initialize_exec();
		s()->e.pid = fork();
		if (s()->e.pid == -1)
			return (0);
		else if (s()->e.pid == 0)
			ft_child();
		else
			ft_parent();
	}
	return (0);
}

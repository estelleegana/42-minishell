/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_loop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:19:28 by estegana          #+#    #+#             */
/*   Updated: 2024/10/02 21:14:58 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

//rappel de l'ordre:
//1 heredoc
//2 redirections <, >, >> (ne comptabiliser que la derniere si plusieurs infile/outfile)
//3 pipe
//4 builtins

int	ft_loop(t_list *list)
{
	printf("*** entree boucle ***\n");
	if (ft_builtins(list))
		return (0);
	else if (list->pipes > 0)
		ft_pipe(list);
	else
	{
		list->pid = fork();
		if (list->pid == -1)
			return (0);
		else if (list->pid == 0)
			ft_child(list);
		else
			ft_parent(list);
	}
	return (0);
}

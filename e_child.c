/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_child.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:49:06 by estegana          #+#    #+#             */
/*   Updated: 2024/09/23 20:12:46 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_child(void)
{
	//int infile;
	printf("*** entree child ***\n");
	//if (redirection existe)
	//{
	//	infile = open_file(av[1], 0);
	//	dup2(infile, 0);
	//	dup2(tube[1], 1);
	//	close(tube[0]);
	//}
	ft_execute();
	return (0);
}

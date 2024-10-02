/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:32:48 by estegana          #+#    #+#             */
/*   Updated: 2024/10/01 19:03:22 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

// int	signal = 0;

int	main(int argc, char **argv, char **env)
{
	s()->argc = argc;
	s()->argv = argv;
	s()->env = env;
	if (argc != 1)
		return(printf("No args needed\n"), 1);
	while (1)
		ft_minishell();
}

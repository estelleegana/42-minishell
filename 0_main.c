/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:32:48 by estegana          #+#    #+#             */
/*   Updated: 2024/05/15 17:09:18 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

// int	signal = 0;

int	main(int ac, char **av, char **env)
{
	(void)av;
	s()->env = env;
	if (ac != 1)
		return(printf("No args needed\n"), 1);
	ft_minishell();
}

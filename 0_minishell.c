/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_minishell.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:46:44 by estegana          #+#    #+#             */
/*   Updated: 2024/10/02 17:50:57 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_minishell(void)
{
	s()->p.input = readline(BOLD PROMPT RESET);
	add_history(s()->p.input);
	printf("p.input = %s\n", s()->p.input);
	ft_parsing();
	ft_exec();
	return (0);
}


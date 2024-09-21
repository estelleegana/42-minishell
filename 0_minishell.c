/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_minishell.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:46:44 by estegana          #+#    #+#             */
/*   Updated: 2024/09/21 15:46:49 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_minishell(void)
{
	s()->p.input = readline(PROMPT);
	add_history(s()->p.input);
	ft_parsing();
	ft_exec();
	free(s()->p.input);
	return (0);
}


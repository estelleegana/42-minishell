/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_minishell.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:46:44 by estegana          #+#    #+#             */
/*   Updated: 2024/10/04 15:32:04 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_minishell(void)
{
	t_list	*list;

	s()->p.input = readline(BOLD PROMPT RESET);
	add_history(s()->p.input);
	printf("p.input = %s\n", s()->p.input);
	ft_parsing();
	list = createlist();
	printlist(list);
	ft_exec(list);
	ft_freelist(&list);
	return (0);
}


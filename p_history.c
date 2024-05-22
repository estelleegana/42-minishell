/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_history.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:49:57 by estegana          #+#    #+#             */
/*   Updated: 2024/05/22 20:03:17 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_history(void)
{
	strcpy(s()->h.cmds[s()->h.count], s()->p.input);
	s()->h.count++;
	printf("history : %s\n", s()->h.cmds[s()->h.count]);
	return (0);
}

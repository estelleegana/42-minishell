/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_builtins.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:52:42 by estegana          #+#    #+#             */
/*   Updated: 2024/05/23 12:41:17 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_builtins(void)
{
	if (!ft_strcmp(s()->p.tokens[0], "cd"))
		return (ft_cd(), 1);
	else if (!ft_strcmp(s()->p.tokens[0], "echo"))
		return (ft_echo(), 1);
	else if (!ft_strcmp(s()->p.tokens[0], "exit"))
		return (ft_exit(), 1);
	else if (!ft_strcmp(s()->p.tokens[0], "export"))
		return (ft_export(), 1);
	else if (!ft_strcmp(s()->p.tokens[0], "pwd"))
		return (ft_pwd(), 1);
	else if (!ft_strcmp(s()->p.tokens[0], "unset"))
		return (ft_unset(), 1);
	return (0);
}

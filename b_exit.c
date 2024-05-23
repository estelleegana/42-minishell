/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_exit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:23:46 by estegana          #+#    #+#             */
/*   Updated: 2024/05/23 14:57:44 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_exit(void)
{
	printf("exit\n");
	s()->p.tokens++;
	if (s()->p.ntokens == 1)
		exit(0);
	else if (s()->p.ntokens == 2)
	{

	}
	else
	{
		if (!ft_isdigit(**s()->p.tokens))
		{
			printf("minishell: exit: %s: numeric argument required\n", *s()->p.tokens);
			exit(2);
		}
		else
			printf("minishell: exit: too many arguments\n");
	}
	return 0;
}

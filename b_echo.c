/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_echo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:00:37 by estegana          #+#    #+#             */
/*   Updated: 2024/05/23 14:21:27 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_echo(void)
{
	int i;

	i = 1;
	if (!ft_strcmp(s()->p.tokens[i], "-n"))
	{
		s()->e.echo_n = 1;
		i++;
	}
	else
		s()->e.echo_n = 0;
	while (i < s()->p.ntokens)
	{
		printf("%s", s()->p.tokens[i]);
		if (i == (s()->p.ntokens - 1))
		{
			if (!s()->e.echo_n)
				printf("\n");
		}
		else
			printf(" ");
		i++;
	}
	return (0);
}

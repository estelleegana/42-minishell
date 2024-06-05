/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_tokenize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 20:27:10 by estegana          #+#    #+#             */
/*   Updated: 2024/06/05 19:12:37 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_tokenize(void)
{
	static char *statictoken;

	if (s()->p.input != NULL)
		statictoken = s()->p.input;
	if (statictoken == NULL)
		return (-1);
	s()->p.ndq = 0;
	s()->p.nsq = 0;
	while (*statictoken)
	{
		if (*statictoken == '"')
		{
			statictoken++;
		}
	}
	printf("ndq = %d\n", s()->p.ndq);
	printf("nsq = %d\n", s()->p.nsq);
	return (0);
}


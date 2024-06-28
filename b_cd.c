/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_cd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 11:59:46 by estegana          #+#    #+#             */
/*   Updated: 2024/06/28 20:30:26 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_cd(void)
{
	//unsigned int	i;

	//i = 0;
	if (s()->p.ntokens == 1)
		chdir("/mnt/nfs/homes/estegana");
	else if (s()->p.ntokens == 2)
	{
		if (*s()->p.tokens[1] == '/')
			chdir(s()->p.tokens[1]);
		else
			printf("cd 1 only a relative\n");
	}
	else if (s()->p.ntokens > 2)
		printf("cd: too many args\n");
	return (0);
}

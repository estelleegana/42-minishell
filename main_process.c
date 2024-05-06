/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_process.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:46:44 by estegana          #+#    #+#             */
/*   Updated: 2024/05/06 18:55:27 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	main_process(void)
{
	char	cmd[10];

	while (1)
	{
		printf("minishell > ");
		if (fgets(cmd, sizeof(cmd), stdin) == NULL)
		{
			printf("Erreur lors de la lecture de la commande.\n");
			continue;
		}
	}
	return (0);
}

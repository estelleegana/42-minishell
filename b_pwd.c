/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_pwd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:03:36 by estegana          #+#    #+#             */
/*   Updated: 2024/05/26 18:45:59 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_pwd(void)
{
	s()->e.cwd = getcwd(NULL, 0);
	if (s()->e.cwd != NULL)
		printf("%s\n", s()->e.cwd);
	else
		perror("getcwd() erreur");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_parent.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:51:17 by estegana          #+#    #+#             */
/*   Updated: 2024/09/21 15:50:01 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_parent(void)
{
	int status;
	pid_t childpid;

	printf("*********entree parent***********\n");
	childpid = waitpid(s()->e.pid, & status, 0);
	if (childpid == -1)
		return (printf("waitpid failed\n"), 1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_history.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:49:57 by estegana          #+#    #+#             */
/*   Updated: 2024/05/20 19:28:29 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

//on cree (en mallocant) une nouvelle ligne
t_history	*createline(char *newcmd, unsigned int i)
{
	t_history	*new;

	new = malloc(sizeof(t_history));
	if (!new)
		return (NULL);
	new->nb = i;
	new->cmd = newcmd;
	new->next = NULL;
	return (new);
}

int	ft_history(void)
{
	unsigned int i;

	i = 0;
	s()->h.next = createline(s()->p.input, ++s()->h.nb);
	printf("h.newline (n0 cmd): %d %s\n", s()->h.next->nb, s()->h.next->cmd);
	i+=0;
	return (0);
}

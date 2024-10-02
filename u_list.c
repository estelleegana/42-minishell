/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_list.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:51:35 by estegana          #+#    #+#             */
/*   Updated: 2024/10/02 19:05:51 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_list	*lastlist(t_list *list)
{
	t_list	*tmp;

	if (!list)
		return (NULL);
	tmp = list;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

t_list	*createcmd(char	*commande)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->cmd = commande;
	new->path = NULL;
	new->args = NULL;
	new->pipes = 0;
	new->next = NULL;
	//new->output_fd = -1;
	//new->input_fd = -1;
	//new->env = NULL;
	//if (pipe(new->pipe_fds) < 0)
	//{
	//	printf(RED "[error while creating a cmd pipe]\n" RESET);
	//	return (NULL);
	//}
	return (new);
}

void	addback(t_list **a, t_list *new)
{
	if (!a)
		return ;
	if (!*a)
		*a = new;
	else
		(lastlist(*a)->next = new);
}

t_list	*createlist(void)
{
	t_list	*to_build;
	unsigned int	i;

	to_build = NULL;
	if (s()->p.input != NULL)
	{
		i = 0;
		while (s()->p.tokens[i])
		{
			if (!ft_strcmp(s()->p.tokens[i], "|"))
			{
				to_build->pipes++;
				//to_build = to_build->next;
				i++;
			}
			else
			{
				addback(&to_build, createcmd(s()->p.tokens[i]));
				i++;
			}
		}
	}
	return (to_build);
}

//print la liste chainee de commande
void	printlist(t_list *list)
{
	t_list	*tmp;

	tmp = list;

	while (tmp)
	{
		printf("cmd : %s\n", tmp->cmd);
		printf("pipe? : %i\n", tmp->pipes);
		tmp = tmp->next;
	}
}

void	ft_freelist(char **list)
{
	size_t	i;

	i = 0;
	while (list[i])
	{
		free(list[i]);
		i++;
	}
	free(list);
}

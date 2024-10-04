/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_list.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:51:35 by estegana          #+#    #+#             */
/*   Updated: 2024/10/04 16:12:17 by estegana         ###   ########.fr       */
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
	new->env = NULL;
	new->pipes = 0;
	new->output_fd = -1;
	new->input_fd = -1;
	new->next = NULL;
	if (pipe(new->fd) < 0)
	{
		printf("[error while creating a cmd pipe]\n");
		return (NULL);
	}
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
				i++;
			}
			if (!ft_strcmp(s()->p.tokens[i], "<"))
			{
				to_build->input_fd = open_file(s()->p.tokens[++i], 0);
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
		printf("cmd : %s, ", tmp->cmd);
		printf("pipe : %i, ", tmp->pipes);
		printf("infile : %i\n", tmp->input_fd);
		tmp = tmp->next;
	}
}

void	ft_freetab(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void	ft_freelist(t_list **list)
{
	t_list	*tmp;

	if (!list)
		return ;
	while (*list)
	{
		tmp = (*list)->next;
		(*list)->cmd = NULL;
		(*list)->path = NULL;
		(*list)->args = NULL;
		(*list)->env = NULL;
		(*list)->pipes = 0;
		(*list)->output_fd = -1;
		(*list)->input_fd = -1;
		(*list)->next = NULL;
		free(*list);
		*list = tmp;
	}
}

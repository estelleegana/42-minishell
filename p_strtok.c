/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_strtok.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:46:04 by estegana          #+#    #+#             */
/*   Updated: 2024/06/20 17:52:38 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*ft_substrtok(void)
{
	static char	*staticinput;
	char	*tokenstart;
	char	*tokenend;

	printf("\n------------ tri des tokens ------------\n");
	staticinput = NULL;//initialisation de la chaine statique
	if (s()->p.input != NULL)//si on a un input, staticinput = input
		staticinput = s()->p.input;
	if (staticinput == NULL)
		return (NULL);//sinon on retourne NULL
	printf("staticinput : %s\n", staticinput);
	tokenstart = staticinput;
	printf("tokenstart : %s\n", tokenstart);
	while (*tokenstart && ft_strchr(DELIM, *tokenstart))
		tokenstart++;//on avance jusqu'a ce qu'on trouve un delimiteur
	if (*tokenstart == '\0')
	{
		staticinput = NULL;
		return (NULL);
	}
	tokenend = tokenstart;
	printf("tokenend : %s\n", tokenend);
	while (*tokenend && !ft_strchr(DELIM, *tokenend))
		tokenend++;
	if (*tokenend)
	{
		*tokenend = '\0';
		staticinput = tokenend + 1;
	}
	else
		staticinput = NULL;
	printf("tokenend 2 : %s\n", tokenend);
	printf("staticinput : %s\n", staticinput);
	return (tokenstart);
}

int	ft_strtok(void)
{
	int i;

	i= 0;
	s()->p.tokens[i] = ft_substrtok();
	while (s()->p.tokens != NULL)
	{
		printf("token[%d]: %s\n", i, s()->p.tokens[i]);
		i++;
		s()->p.tokens[i] = ft_substrtok();
	}
	return (0);
}

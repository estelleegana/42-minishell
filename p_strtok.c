/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_strtok.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:46:04 by estegana          #+#    #+#             */
/*   Updated: 2024/06/20 17:05:35 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

//int	ft_tokenize(void)
//{
//	int i;
//	//int	j;
//	char	**tmp;

//	printf("------------ 1 tri des tokens ------------\n");
//	//while (s()->p.input[i])
//	//{
//	//	if (s()->p.input[i] == '"')
//	//	{
//	//		i++;
//	//		while (s()->p.input[i] != '"')
//	//		{
//	//			s()->p.token1[j] = s()->p.input[i];
//	//			i++;
//	//			j++;
//	//		}
//	//	}
//	//	i++;
//	//}
//	//printf("token 1 = %s\n", s()->p.token1);
//	s()->p.tokens = ft_split(s()->p.input, ' ');//si jamais ft_strtok marche pas
//	tmp = s()->p.tokens;
//	i = 0;
//	while (tmp[i])
//	{
//		printf("token[%d] = %s\n", i, tmp[i]);
//		i++;
//	}
//	return (0);
//}

int	ft_strtok(void)
{
	static char	*staticinput;
	char	*tokenstart;
	char	*tokenend;

	printf("\n------------ tri des tokens ------------\n");
	staticinput = NULL;//initialisation de la chaine statique
	if (s()->p.input != NULL)//si on a un input, staticinput = input
		staticinput = s()->p.input;
	if (staticinput == NULL)
		return (0);//sinon on retourne NULL
	printf("staticinput : %s\n", staticinput);
	tokenstart = staticinput;
	printf("tokenstart : %s\n", tokenstart);
	while (*tokenstart && ft_strchr(DELIM, *tokenstart))
		tokenstart++;//on avance jusqu'a ce qu'on trouve un delimiteur
	if (*tokenstart == '\0')
	{
		staticinput = NULL;
		return (0);
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
	return (0);
}

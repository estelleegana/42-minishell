/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_tokenize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:46:04 by estegana          #+#    #+#             */
/*   Updated: 2024/06/12 18:14:41 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_tokenize(void)
{
	int i;
	int	j;
	//char	**tmp;

	printf("------------ 1 tri des tokens ------------\n");
	while (s()->p.input[i])
	{
		if (s()->p.input[i] == '"')
		{
			i++;
			while (s()->p.input[i] != '"')
			{
				s()->p.token1[j] = s()->p.input[i];
				i++;
				j++;
			}
		}
		i++;
	}
	printf("token 1 = %s\n", s()->p.token1);
	//s()->p.tokens = ft_split(s()->p.input, ' ');//si jamais tokenize marche pas
	//tmp = s()->p.tokens;
	//i = 0;
	//while (tmp[i])
	//{
	//	printf("token[%d] = %s\n", i, tmp[i]);
	//	i++;
	//}
	return (0);
}

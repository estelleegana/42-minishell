/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_tokenize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 20:27:10 by estegana          #+#    #+#             */
/*   Updated: 2024/05/31 21:27:38 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_tokenize(void)
{
	static char *statictoken;

	if (s()->p.input != NULL)
		statictoken = s()->p.input;
	if (statictoken == NULL)
		return (-1);
	while (*statictoken && ft_strchr(s()->p.input, '"'))
}

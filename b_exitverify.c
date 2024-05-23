/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_exitverify.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:35:39 by estegana          #+#    #+#             */
/*   Updated: 2024/05/23 15:40:57 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_exitverify(void)
{
	s()->e.exit_i = ft_llatoi(*s()->p.tokens);
	s()->e.exit_iu = ft_lluatoi(*s()->p.tokens);
	if (s()->e.exit_i <= 0 && (unsigned long long int)(s()->e.exit_i * (-1)) == s()->e.exit_iu)
		return (0);
	else if (s()->e.exit_i >= 0 && (unsigned long long int)ft_llatoi(*s()->p.tokens) == ft_lluatoi(*s()->p.tokens))
		return (0);
	else
		return (-1);
	return (0);
}

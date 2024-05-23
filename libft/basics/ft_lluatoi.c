/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lluatoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:14:16 by estegana          #+#    #+#             */
/*   Updated: 2024/05/23 15:14:25 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long unsigned int	ft_lluatoi(char *str)
{
	long long unsigned int	res;

	if (!str || !*str)
		return (0);
	if (*str == '-' || *str == '+')
		str++;
	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10;
		res = res + *str - '0';
		str++;
	}
	return (res);
}

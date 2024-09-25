/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_openfile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:03:09 by estegana          #+#    #+#             */
/*   Updated: 2024/09/23 20:15:33 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	open_file(char *file, int inout)
{
	int	ret;

	if (inout == 0)
		ret = open(file, O_RDONLY, 0777);
	if (inout == 1)
		ret = open(file, O_WRONLY | O_CREAT | O_TRUNC, 0777);
	if (ret == -1)
		return (printf("__ERROR_FILE__:\nCan't read outfile or infile.\n"), 0);
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:09:11 by estegana          #+#    #+#             */
/*   Updated: 2024/04/16 11:31:45 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdio.h>
# include "parsing.h"
# include "exec.h"

typedef struct s_initialestruct
{
	int	ac;//
	char	*av;
	char	**env;
	t_execution	e;
	t_parsing	p;

}				t_initialestruct;

//noyau
t_initialestruct	*s(void);

#endif
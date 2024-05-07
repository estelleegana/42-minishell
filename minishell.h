/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:09:11 by estegana          #+#    #+#             */
/*   Updated: 2024/05/07 18:00:51 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdio.h>
# include "libft/incl/libft.h"

# define PROMPT "minishell >"

typedef struct s_parsing
{
}				t_parsing;

typedef struct s_exec
{
	t_parsing	p;
}				t_exec;

typedef struct s_initialestruct
{
	int			ac;
	char		**av;
	char		**env;
	t_exec		e;
	t_parsing	p;
}				t_initialestruct;

//aaa : NOYAU (main, lancement de processus, etc.)
int					ft_minishell(void);

//e : EXECUTION
int	ft_exit(void);

//p : PARSING
int	ft_parsing(void);

//u : UTILITAIRES
t_initialestruct	*s(void);

#endif

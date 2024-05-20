/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:09:11 by estegana          #+#    #+#             */
/*   Updated: 2024/05/20 16:45:42 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include "libft/incl/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <readline/readline.h>
# include <readline/history.h>


# define PROMPT "minishell$ "

typedef struct s_parsing
{
	char		*input;
	char		**tokens;
	int			ntokens;
}				t_parsing;

typedef struct s_exec
{
	char	*cmdpath;
}				t_exec;

typedef struct s_history
{
	char		*cmd;
	unsigned int	i;
	struct s_history	*next;

}				t_history;

typedef struct s_initialestruct
{
	char		**env;
	t_exec		e;
	t_parsing	p;
	t_history	h;
}				t_initialestruct;

//0 : NOYAU (main, lancement de processus, etc.)
int	ft_minishell(void);

//b : BUILTINS (cd, echo (-n), pwd, export, unset, env, exit)
int	ft_exit(void);

//e : EXECUTION (un genre de pipex)
int	ft_exec(void);

//p : PARSING
int	ft_parsing(void);
int	ft_history(void);

//u : UTILITAIRES
t_initialestruct	*s(void);
int	ft_freeall(void);
int	ft_freeexec(void);
int	ft_freeparsing(void);
int	ft_freetokens(void);

#endif

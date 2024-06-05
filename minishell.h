/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:09:11 by estegana          #+#    #+#             */
/*   Updated: 2024/06/05 19:05:38 by estegana         ###   ########.fr       */
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
# define DELIM ""
# define MAX_HISTORY 100
# define MAX_COMMAND_LENGTH 1000

//input = input initial brut
//tokens = tokens regroupes par type
//ex: "ls(commande) -l(arg1) /home/user"(arg2))
//ex: "echo(commande) "hihi lol ok"(arg) |(operateur) grep(cmd2) ok(arg))
//ntokens = nb total de tokens
//analyser les delimiteurs
//expand = $USER > afficher la variable (avec '' et "")
//nouvelle liste chainee de cmd (analyse validite)
//compter nb de pipe |
//a part les < >, tout sera des args
typedef struct s_parsing
{
	char		*input;
	char		**tokens;
	unsigned int	ntokens;
	unsigned int	ndq;
	unsigned int	nsq;
}				t_parsing;

typedef struct s_exec
{
	char					*cmdpath;
	char					*cmd;
	int						echo_n;
	char					*cwd;
	long long int			exit_i;
	long long unsigned int	exit_iu;
}				t_exec;

//afficher un historique avec la cmd "history"
typedef struct s_history
{
	char		cmds[MAX_HISTORY][MAX_COMMAND_LENGTH];
	unsigned int	count;
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

//b : BUILTINS (cd, echo (-n), env, exit, export, pwd, unset)
int	ft_builtins(void);
int	ft_cd(void);
int	ft_echo(void);
int	ft_exit(void);
int	ft_exitverify(void);
int	ft_export(void);
int	ft_pwd(void);
int	ft_unset(void);

//e : EXECUTION (un genre de pipex)
int	ft_exec(void);

//p : PARSING
int	ft_parsing(void);
int	ft_tokenize(void);

//u : UTILITAIRES
t_initialestruct	*s(void);
int	ft_freeall(void);
int	ft_freeexec(void);
int	ft_freeparsing(void);
int	ft_freetokens(void);

#endif

//"" impair > prompt dquote>
//'' impair > prompt quote>

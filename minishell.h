/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:09:11 by estegana          #+#    #+#             */
/*   Updated: 2024/09/21 18:07:10 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include "libft/incl/libft.h"
//printf
# include <stdio.h>
//malloc
# include <stdlib.h>
//pid_t
# include <fcntl.h>
# include <readline/readline.h>
# include <readline/history.h>
//waitpid
#include <sys/types.h>
#include <sys/wait.h>


# define PROMPT "minishell$ "
# define DELIM "\""
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
	char	**tokens;
	unsigned int	ntokens;
	unsigned int	npipes;
}				t_parsing;

typedef struct s_command
{
	char	*cmd;
	char **args;
	pid_t pid;
	struct s_command	*next;
}				t_command;

typedef struct s_heredoc
{
	char *limiter;
	struct s_heredoc *next;
}				t_heredoc;

typedef struct s_exec
{
	char					*path;
	t_command				*cmds;
	int						ncmds;
	int						hd;
	int						pipes;
	pid_t					pid;
	int						echo_n;
	char					*cwd;
	long long int			exit_i;
	long long unsigned int	exit_iu;
}				t_exec;

typedef struct s_initialestruct
{
	int			ac;
	char		**av;
	char		**env;
	t_exec		e;
	t_parsing	p;
}				t_initialestruct;

//0 : NOYAU (main, lancement de processus, etc.)
int	ft_minishell(void);

//b : BUILTINS (cd, echo (-n), env, exit, export, pwd, unset)
int	ft_builtins(void);//fait
int	ft_cd(void);
int	ft_echo(void);//fait
int	ft_exit(void);//fait
int	ft_exitverify(void);//fait
int	ft_export(void);
int	ft_pwd(void);//fait
int	ft_unset(void);

//e : EXECUTION (un genre de pipex)
int	ft_child(void);
char	*printvariableenv(char *name, char **env);
char	*cmdpath(char *cmd);
int	ft_exec(void);
int	ft_execute(void);
int	ft_hd(void);
int	ft_initialize_exec(void);
int	ft_is_hd(void);
int	ft_loop(void);
int	ft_parent(void);

//p : PARSING
int	ft_npipes(void);
int	ft_ntokens(void);
int	ft_parsing(void);

//u : UTILITAIRES
t_initialestruct	*s(void);
int	ft_freeall(void);
int	ft_freeexec(void);
int	ft_freeparsing(void);
int	ft_freetokens(void);

#endif

//"" impair > prompt dquote>
//'' impair > prompt quote>

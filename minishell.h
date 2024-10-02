/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:09:11 by estegana          #+#    #+#             */
/*   Updated: 2024/10/02 21:34:52 by estegana         ###   ########.fr       */
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
//errno jsp cke c
#include <errno.h>
//waitpid
#include <sys/types.h>
#include <sys/wait.h>

# define RESET "\e[0m"
# define BOLD "\e[1m"
# define PROMPT "minishell$ "
# define DELIM "\""
# define CMD 100
# define ARG 200
# define OP 300

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

typedef struct s_list
{
	char			*cmd;
	char			*path;
	pid_t			pid;
	char			**args;
	char			**env;
	int				pipes;
	int				fd[2];
	int				infile;//<
	int				outfile;//>
	int				append_out;//
	struct s_list	*next;
}				t_list;

typedef struct s_parsing
{
	char			*input;
	char			**tokens;
	unsigned int	ntokens;
	unsigned int	npipes;
	unsigned int	nhd;
	unsigned int	nredir;
}				t_parsing;

typedef struct s_exec
{
	//char			*cmd;
	//char			*path;
	//pid_t			pid;
	//char			**args;
	//char			**env;
	//int				pipes;
	//int				fd[2];
	//int				infile;
	//int				outfile;
	//int				append_out;
	//struct s_exec	*next;
	int						echo_n;
	char					*cwd;
	long long int			exit_i;
	long long unsigned int	exit_iu;
	//char					**limiters;
}				t_exec;

typedef struct s_initialestruct
{
	int			argc;
	char		**argv;
	char		**env;
	t_exec		e;
	t_parsing	p;
}				t_initialestruct;

//0 : NOYAU (main, lancement de processus, etc.)
int	ft_minishell(void);

//b : BUILTINS (cd, echo (-n), env, exit, export, pwd, unset)
int	ft_builtins(t_list *list);//fait
int	ft_cd(void);
int	ft_echo(void);//fait
int	ft_exit(void);//fait
int	ft_exitverify(void);//fait
int	ft_export(void);
int	ft_pwd(void);//fait
int	ft_unset(void);

//e : EXECUTION (un genre de pipex)
int	ft_child(t_list *list);
char	*printvariableenv(char *name, char **env);
char	*cmdpath(char *cmd);
int	ft_exec(void);
int	ft_execute(t_list *list);
int	ft_loop(t_list *list);
int	open_file(char *file, int inout);
int	ft_parent(t_list *list);
int	ft_pipe(t_list *list);

//hd : HEREDOC
int	ft_hd(void);
int	ft_is_hd(void);
//int	ft_limiters(void);

//p : PARSING
int	ft_nhd(void);
int	ft_npipes(void);
int	ft_nredir(void);
int	ft_ntokens(void);
int	ft_parsing(void);

//u : UTILITAIRES
t_list	*lastlist(t_list *list);
t_list	*createcmd(char	*commande);
void	addback(t_list **a, t_list *new);
t_list	*createlist(void);
void	printlist(t_list *list);
void	ft_freelist(char **list);
t_initialestruct	*s(void);

#endif


//prendre en compte que la derniere redirection

//ecarter les cas d'erreur suivants :
//$ | ls (pas de commande avant une |)
//minishell: syntax error near unexpected token '|'

//$ < i (pas de fichier ac un nom valide apres une redir d'input)
//bash: i: No such file or directory

//$ <<
//bash: syntax error near unexpected token 'newline{commande qui suit}'

//$ < (rien apres une redir)
//bash: syntax error near unexpected token `newline{cmd qui suit}'


//gerer 1 pipe
//plusieurs
//gerer les redirections < puis > puis >>
//cas d'enchainements


//ordre de priorite d'execution :

//1		NON GERE Parenthèses () et subshells
//2		NON GERE Substitution de commande $(...) ou `...`
//3		NON GERE Substitution arithmétique $((...))
//4		Substitution de variables $variable
//5		Redirections <, >, 2>, etc.
//6		NON GERE Expansion des accolades {...}
//7		*: BONUS Expansion de motifs *, ?, etc.
//8		NON GERE Expansion des tilde ~
//9		Pipelines |
//			> tester "ls | grep e_"
//10	BONUS Opérateurs logiques &&, ||
//11	NON GERE Séparateurs ;, &
//12	NON GERE Groupes de commandes {} et ()
//13	NON GERE Fonctions et alias
//14	builtins

//cat fichier.txt | grep "erreur" | sort | uniq

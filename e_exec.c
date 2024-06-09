/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_exec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:23:45 by estegana          #+#    #+#             */
/*   Updated: 2024/06/09 20:49:51 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*printvariableenv(char *name, char **env)
{
	int		i;
	int		j;
	char	*sub;

	i = 0;
	while (env[i])
	{
		j = 0;
		while (env[i][j] && env[i][j] != '=')
			j++;
		sub = ft_substr(env[i], 0, j);
		if (ft_strncmp(sub, name, ft_strlen(sub)) == 0)
		{
			free(sub);
			return (env[i] + j + 1);
		}
		free(sub);
		i++;
	}
	return (NULL);
}

char	*cmdpath(char *cmd, char **env)
{
	int		i;
	char	*exec;
	char	**allpath;
	char	*path_part;
	char	**split_cmd;

	i = -1;
	allpath = ft_split(printvariableenv("PATH", env), ':');
	split_cmd = ft_split(cmd, ' ');
	while (allpath[++i])
	{
		path_part = ft_strjoin(allpath[i], "/");
		exec = ft_strjoin(path_part, split_cmd[0]);
		free(path_part);
		if (access(exec, F_OK | X_OK) == 0)
		{
			//ft_freelist(split_cmd);
			return (exec);
		}
		free(exec);
	}
	//ft_freelist(allpath);
	//ft_freetokens();
	return (cmd);
}

int	ft_exec(void)
{
	char	*path;

	printf("------------ ENTREE DANS L'EXEC ------------\n");
	path = cmdpath(s()->p.tokens[0], s()->env);
	if (ft_builtins())
		return (0);
	if (execve(path, s()->p.tokens, s()->env) == -1)
	{
		ft_putstr_fd("minishell: command not found: ", 2);
		ft_putendl_fd(s()->p.tokens[0], 2);
		ft_freetokens();
		//exit(127);
	}
	return (0);
}

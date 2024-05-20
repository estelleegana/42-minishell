/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_cmdpath.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 18:43:58 by estegana          #+#    #+#             */
/*   Updated: 2024/05/19 18:50:58 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

//dans env, renvoie le contenu de la variable d'environnement recherchee
//(ici PATH)
char	*printvariableenv(char *name)
{
	int		i;
	int		j;
	char	*sub;

	i = 0;
	while (s()->env[i])
	{
		j = 0;
		while (s()->env[i][j] && s()->env[i][j] != '=')
			j++;
		sub = ft_substr(s()->env[i], 0, j);
		if (ft_strncmp(sub, name, ft_strlen(sub)) == 0)
		{
			free(sub);
			return (s()->env[i] + j + 1);
		}
		free(sub);
		i++;
	}
	return (NULL);
}

//separe le contenu de la variable d'env "PATH"
//split cmd si y a une option (ex: "ls -l")
//pr chaque partie de allpath :
//> ajoute "/cmd" a chaque fin
//> si cmd existe et peut s'executer -> renvoie chemin de cmd
//sinon free tout et return cmd
char	*cmdpath(char *cmd)
{
	int		i;
	char	*exec;
	char	**allpath;
	char	*path_part;

	i = -1;
	allpath = ft_split(printvariableenv("PATH", s()->env), ':');
	while (allpath[++i])
	{
		path_part = ft_strjoin(allpath[i], "/");
		exec = ft_strjoin(path_part, s()->p.tokens[0]);
		free(path_part);
		if (access(exec, F_OK | X_OK) == 0)
		{
			ft_freelist(s()->p.tokens);
			return (exec);
		}
		free(exec);
	}
	ft_freelist(allpath);
	ft_freelist(s()->p.tokens);
	return (cmd);
}

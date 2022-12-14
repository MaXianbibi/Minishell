/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_path.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 03:14:39 by jmorneau          #+#    #+#             */
/*   Updated: 2022/11/09 03:14:51 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

static char	*find_path_line(char **envp)
{
	int	i;

	i = 0;
	while (envp[i])
	{
		if (ft_strnstr(envp[i], "PATH=", 5) != 0)
			return (envp[i] + 5);
		i++;
	}
	return (NULL);
}

static char	*find_path(char **path, char *cmd)
{
	int		i;
	char	*tmp;

	i = 0;
	while (path[i] != NULL)
	{
		tmp = ft_strjoin(path[i], cmd);
		if (access(tmp, F_OK) == 0)
			return (tmp);
		free (tmp);
		i++;
	}
	return (NULL);
}

char	*find(char **envp, char *cmd)
{
	char	**path_env;
	char	*tmp;
	char	*path_to_command;
	int		i;

	i = 0;
	path_env = ft_split(find_path_line(envp), ':');
	if (!path_env)
		return (print_error());
	while (path_env[i] != NULL)
	{
		tmp = ft_strjoin(path_env[i], "/");
		free (path_env[i]);
		path_env[i] = tmp;
		i++;
	}
	path_to_command = find_path(path_env, cmd);
	if (!path_to_command)
		return (print_error());
	ft_free_chartable(path_env);
	return (path_to_command);
}

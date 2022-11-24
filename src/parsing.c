/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:16:11 by dwawzyni          #+#    #+#             */
/*   Updated: 2022/11/24 07:43:21 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

char **split_cmdline(char *av)
{
    char **cmd_splitted;
    cmd_splitted = ft_split(av,' ');
    return(cmd_splitted);
    
}

void check_for_builtins(char *av, char **envp)
{
    int i;
    char **stack;
	char *ok ;

    i = 0;
    stack = split_cmdline(av);
    if (!ft_strncmp(av, "echo", 4))
        echo(stack);
    else if (!ft_strncmp(av, "cd", 2))
        cd(stack[1]);
    else if (!ft_strncmp(av, "pwd", 3))
        pwd();
    else if (!ft_strncmp(av, "export", 6))
		ft_export(stack);
     else if (!ft_strncmp(av, "unset", 5))
        printf("unset\n");
    else if (!ft_strncmp(av, "env", 3))
        env();
	else if (!strcmp(av, "exit"))
			exit(EXIT_SUCCESS);
	else if (*av)
	{
		ok = find(envp, av);
		if (ok)
		{
			printf("%s\n", ok);
			free (ok);
		}
	}
	(void)envp;
	(void)ok;

}

char *parsing_PATH()
{
    char *str;
    str = getenv("PATH");
    return(str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwawzyni <dwawzyni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:16:11 by dwawzyni          #+#    #+#             */
/*   Updated: 2022/11/09 01:33:53 by dwawzyni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

char **split_cmdline(char *av)
{
    char **cmd_splitted;
    cmd_splitted = ft_split(av,' ');
    return(cmd_splitted);
}

void check_for_builtins(char *av)
{
    int i;
    char **stack;

    i = 0;
    stack = split_cmdline(av);
    if (!ft_strncmp(av, "echo", 4))
        echo(stack);
    else if (!ft_strncmp(av, "cd", 2))
        cd(stack[1]);
    else if (!ft_strncmp(av, "pwd", 3))
        pwd();
    else if (!ft_strncmp(av, "export", 6))
        printf("export\n");
     else if (!ft_strncmp(av, "unset", 5))
        printf("unset\n");
    else if (!ft_strncmp(av, "env", 3))
        printf("env\n");
}

char *parsing_PATH()
{
    char *str;
    str = getenv("PATH");
    return(str);
}

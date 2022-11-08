/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwawzyni <dwawzyni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:16:11 by dwawzyni          #+#    #+#             */
/*   Updated: 2022/11/08 14:27:23 by dwawzyni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

char *get_cmd(int ac, char **av)
{
    char *cmdline;
    int i;
    (void) ac;
    
    i = 1;
    while(av[i] != NULL)
    {
        cmdline = malloc(sizeof(char *) * ft_strlen(av[i]));
        cmdline = ft_strjoin(cmdline ,av[i]);
        printf("%s",cmdline);
        i++;
    }
    return(cmdline);
}

void check_for_builtins(char **av)
{
    //char *stack;
    if(ft_strncmp(av[2],"cd",2) == 1)
        printf("cd");
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwawzyni <dwawzyni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:16:11 by dwawzyni          #+#    #+#             */
/*   Updated: 2022/11/06 17:31:45 by dwawzyni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char *get_cmd(int ac, char **av)
{
    char *cmdline;
    int i;
    
    i = 1;
    while(ac)
    {
        cmdline = ft_strjoin(cmdline ,av[i]);
        printf("%s",cmdline);
    }
    return(cmdline);
}
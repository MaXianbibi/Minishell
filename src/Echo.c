/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwawzyni <dwawzyni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:56:39 by dwawzyni          #+#    #+#             */
/*   Updated: 2022/11/09 01:59:41 by dwawzyni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

 void echo(char **splitcmd)
 {
    // char *str2 = NULL;
    char *str;
    (void)splitcmd;
    
    str = ft_strjoin(str,"\n");
    // str2 = splitcmd[1];
    // if(ft_strncmp(splitcmd[1],"-n",2) == 0)
        // ft_printf("%s",str2);
    // else
        printf("%s",str);
 }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwawzyni <dwawzyni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:56:39 by dwawzyni          #+#    #+#             */
/*   Updated: 2022/11/09 01:36:58 by dwawzyni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

 void echo(char **splitcmd)
 {
    char *str;
    char *str2;
    
    str = ft_strjoin(str,"\n");
    str2 = splitcmd[1];
    if(ft_strncmp(splitcmd[1],"-n",2) == 0)
        ft_printf("%s",str);
    else
        ft_printf("%s",str2);
 }
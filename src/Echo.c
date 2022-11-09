/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwawzyni <dwawzyni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:56:39 by dwawzyni          #+#    #+#             */
/*   Updated: 2022/11/09 03:01:58 by dwawzyni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

 void echo(char **splitcmd)
 {
    int i;
    if(splitcmd[1] == NULL)
        return ;
        if(!ft_strncmp(splitcmd[1],"-n", 2))
        {
            i = 2;
            while (splitcmd[i])
                printf("%s ", splitcmd[i++]);
        }
        else
        {
            i = 1;
            while (splitcmd[i])
            {
                printf("%s ", splitcmd[i]);
                if(splitcmd[i + 1] == NULL)
                    printf("\n");
                i++;
            }
        }
 }
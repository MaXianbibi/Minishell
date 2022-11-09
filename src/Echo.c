/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:56:39 by dwawzyni          #+#    #+#             */
/*   Updated: 2022/11/09 02:03:50 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

 void echo(char **splitcmd)
 {
    if(!ft_strncmp(splitcmd[1],"-n", 2))
        printf("%s", splitcmd[2]);
    else
        printf("%s\n", splitcmd[1]);
 }
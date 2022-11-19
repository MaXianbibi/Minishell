/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_minishell.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:48:41 by jmorneau          #+#    #+#             */
/*   Updated: 2022/11/09 04:44:12 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_MINISHELL_H
# define P_MINISHELL_H

#include "s_minishell.h"

char *parsing_PATH();
void check_for_builtins(char *av, char **envp);
char **split_cmdline(char *av);

void echo(char **splitcmd);
void pwd();
void cd(char *path);

char	*find(char **envp, char *cmd);
void	*print_error(void);
int	print_error_int(void);

void handler_sigint(int num);

#endif
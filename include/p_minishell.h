/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_minishell.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:48:41 by jmorneau          #+#    #+#             */
/*   Updated: 2022/11/24 07:43:06 by jmorneau         ###   ########.fr       */
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
void env();

char	*find(char **envp, char *cmd);
void	*print_error(void);
int	print_error_int(void);
void handler_sigint(int num);
void creat_env(char **envp);
void print_env(void);
void ft_export(char **arg);
void	insert_at_head(t_node **head, t_node *node_to_insert);
t_node	*creat_new_node(char *str);

#endif
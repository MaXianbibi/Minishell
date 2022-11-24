/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_minishell.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:48:31 by jmorneau          #+#    #+#             */
/*   Updated: 2022/11/23 03:58:20 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_MINISHELL_H
# define S_MINISHELL_H

struct s_node
{
	struct s_node	*next;
	char			*value;
};
typedef struct s_node	t_node;

struct s_global
{
	t_node		*envp;
};
typedef struct	s_global t_global;

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 04:07:06 by jmorneau          #+#    #+#             */
/*   Updated: 2022/11/23 06:33:20 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

t_global global;


void insert_var(t_node **head, t_node * node_to_insert)
{
	t_node	*tmp;
	t_node	*s;

	tmp = *head;
	if (!*head)
		*head = node_to_insert;
	else
	{
		while (tmp->next != NULL)
		{
			if (!tmp->next->next)
			{
				s = tmp->next;
				tmp->next = node_to_insert;
				node_to_insert->next = s;
				return ;
			}
			tmp = tmp->next;
		}
		tmp->next = node_to_insert;
	}
}

static int check_var_name(char *str, int n)
{
	int i;
	int letter;

	i = 0;
	letter = 0;
	while (str[i] && i < n)
	{
		if (ft_isalpha(str[i]) || str[i] == '_')
			letter = 1;
		if (!ft_isalnum(str[i]) && str[i] != '_')
		{
			ft_putstr_fd("export: not an identifier: ", 2);
			ft_putendl_fd(str, 2);
			return (0);
		}
		i++;
	}
	if (!letter)
	{
		ft_putstr_fd("export: not an identifier: ", 2);
		ft_putendl_fd(str, 2);
		return (0);	
	}
	return (1);
}

static int search_equal(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '=')
			return (i);
		i++;
	}
	return (0);
}

static int check_same_name(char *str)
{
kiki
	
}

void ft_export(char **arg)
{
	int i;

	i = search_equal(arg[1]);
	if (!i)
		return ;
	if (!check_var_name(arg[1], i))
		return ;
	insert_var(&global.envp, creat_new_node(ft_strdup(arg[1])));

}
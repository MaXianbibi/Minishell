/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   var_env.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 03:44:54 by jmorneau          #+#    #+#             */
/*   Updated: 2022/11/23 04:01:04 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

extern t_global global;

t_node	*creat_new_node(char *str)
{
	t_node	*result;

	result = malloc(sizeof(t_node));
	if (result == NULL)
		return (NULL);
	result->value = str;
	result->next = NULL;
	return (result);
}

void	insert_at_head(t_node **head, t_node *node_to_insert)
{
	t_node	*tmp;

	tmp = *head;
	if (!*head)
		*head = node_to_insert;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = node_to_insert;
	}
}

void creat_env(char **envp)
{
	int i;

	i = 0;
	while (envp[i])
	{
		insert_at_head(&global.envp, creat_new_node(envp[i]));
		i++;
	}
	
}

	// while (i < argc - 1)
		// insert_at_head(&head_a, creat_new_node(ft_atoi(argv[i++ + 1])));
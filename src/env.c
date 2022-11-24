/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 03:14:19 by dwawzyni          #+#    #+#             */
/*   Updated: 2022/11/24 07:52:05 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

extern t_global global;

void print_env(void)
{
	t_node *tmp;

	tmp = global.envp;
	while (tmp)
	{
		printf("%s\n", tmp->value);
		tmp = tmp->next;
	}
}
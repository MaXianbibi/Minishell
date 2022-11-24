/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 04:00:55 by jmorneau          #+#    #+#             */
/*   Updated: 2022/11/23 04:02:40 by jmorneau         ###   ########.fr       */
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
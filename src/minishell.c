/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwawzyni <dwawzyni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:33:57 by dwawzyni          #+#    #+#             */
/*   Updated: 2022/11/08 23:47:23 by dwawzyni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

int main()
{	
	char *ok;
	while (1)
	{
		ok  = readline("> ");
		check_for_builtins(ok);
		if (!strcmp(ok, "exit"))
			break;
		add_history("allo\n");

		rl_redisplay();
		rl_on_new_line();
		if (ok)
			free(ok);
	}
	if (ok)
		free(ok);
}
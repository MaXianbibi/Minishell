/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:33:57 by dwawzyni          #+#    #+#             */
/*   Updated: 2022/11/09 01:56:30 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

void handler(int num)
{
	if (num == SIGINT)
	{
		write(2, "\n", 1);
		rl_on_new_line();
		rl_replace_line("", 1);
		rl_redisplay();
	}
}

int main(int argc, char **argv)
{	
	char *ok;

	(void)argc ; (void)argv;
	while (1)
	{
		signal(SIGINT, handler);
		ok  = readline("> ");
		check_for_builtins(ok);
		if (!strcmp(ok, "exit"))
			break;
		add_history(ok);
		if (ok)
			free(ok);
	}
	if (ok)
		free(ok);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwawzyni <dwawzyni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:33:57 by dwawzyni          #+#    #+#             */
/*   Updated: 2022/11/09 03:49:15 by dwawzyni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

void handler_sigint(int num)
{
	if (num == SIGINT)
	{

		write(2, "\n", 1);
		rl_on_new_line();
		rl_replace_line("", 1);
		rl_redisplay();
	}
}

void handler_siquit(int num)
{
	if (num == SIGQUIT)
		exit(0);
}

int main(int argc, char **argv, char **envp)
{	
	char *ok;
	struct sigaction sa;
	struct sigaction sq;
	
	sa.__sigaction_u.__sa_handler = &handler_sigint;
	sa.sa_flags = SA_RESTART;
	
	sa.__sigaction_u.__sa_handler = &handler_siquit;
	sq.sa_flags = SA_RESTART;
	(void)argc ; (void)argv;
	while (1)
	{
		sigaction(SIGINT, &sa, NULL);
		sigaction(SIGQUIT, &sq, NULL); // marche pas
	
		ok  = readline("> ");
	
		check_for_builtins(ok, envp);
		add_history(ok);
		if (ok)
			free(ok);
	}
	if (ok)
		free(ok);
}
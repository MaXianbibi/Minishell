/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:33:57 by dwawzyni          #+#    #+#             */
/*   Updated: 2022/11/24 07:43:02 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

t_global global;

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
		ok  = readline("> ");
	
		check_for_builtins(ok, envp);
		add_history(ok);
		if (ok)
			free(ok);
	}
	if (ok)
		free(ok);
}
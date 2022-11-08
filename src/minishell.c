/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:33:57 by dwawzyni          #+#    #+#             */
/*   Updated: 2022/11/08 14:34:06 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int main(int argc, char **argv)
{	
	char *ok;

	(void)argc;
	(void)argv;

	while (1)
	{
		ok  = readline("> ");
		if (!strcmp(ok, "exit"))
			break;
		printf("%s\n", ok);

		add_history("allo\n");

		rl_redisplay();
		rl_on_new_line();

		if (ok)
			free(ok);
	}


	if (ok)
		free(ok);
	
}
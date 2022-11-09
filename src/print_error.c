/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 22:04:16 by jmorneau          #+#    #+#             */
/*   Updated: 2022/11/09 03:18:31 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

void	*print_error(void)
{
	ft_printf("Error\n");
	return (NULL);
}

int	print_error_int(void)
{
	ft_printf("Error\n");
	return (1);
}

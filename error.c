/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfabre <rfabre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 00:07:36 by rfabre            #+#    #+#             */
/*   Updated: 2017/01/25 20:27:02 by rfabre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_error_msg_exit(char *message)
{
	ft_error_msg(message);
	exit(-1);
}

void	ft_error_msg(char *message)
{
	if (message)
		ft_putendl_fd(message, 1);
}

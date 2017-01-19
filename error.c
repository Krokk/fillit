/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfabre <rfabre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 00:07:36 by rfabre            #+#    #+#             */
/*   Updated: 2017/01/18 00:07:37 by rfabre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	error_msg_exit(char *message)
{
	error_msg(message);
	exit(-1);
}

void error_msg(char *message)
{	
	if (message)
		ft_putendl_fd(message, 2);
}
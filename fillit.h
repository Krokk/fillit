/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfabre <rfabre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 23:30:17 by rfabre            #+#    #+#             */
/*   Updated: 2017/01/19 01:52:14 by rfabre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define BUF_SIZE 4096
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include "../LIBFT/libft.h"

typedef struct		s_coor
{
	char    lettre;
	int		x[4];
	int		y[4];
}					t_coor;


void check_input_length(int lenght);
void check_input_compo(char *str);
void	check_input_newline(char *str);
void check_input_link(char *str);
void ft_input_checker(char **grid);
char *input_split(char *str);
char **read_input(char *str);
int ft_tetri_count(char **grid);
int ft_max_size(int count);
void ft_printstrs(char **str);
void error_msg_exit(char *message);
void error_msg(char *message);
int ft_check(char **grid, t_coor coord);
t_coor *ft_get_coord(char **grid, int count);
t_coor ft_update_coord(t_coor coord, int x, int y);
char	**ft_clean_grid(char **grid, t_coor coord);
char	**ft_empty_grid(char **grid, int max);
char	**ft_write(char **grid,t_coor coord);
char	**ft_fill(char **grid, t_coor *coord, int count,int i);
char	**ft_solveit(t_coor *coord, int max, int count);
	
#endif

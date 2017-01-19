/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfabre <rfabre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 20:42:01 by rfabre            #+#    #+#             */
/*   Updated: 2017/01/19 01:45:14 by rfabre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_tetri_count(char **grid)
{
	int i;

	i = 0;
	while (grid[i])
	{
		i++;
	}
	return (i);
}

int		ft_max_size(int count)
{
	int max;

	max = 2;
	while (max * max < count * 4)
		max++;
	return (max);
}



/*void	ft_change_letter(char **grid)
{
	int i;
	int pos;
	char lettre;

	lettre = 'A';
	i = 0;
	pos = 0;
	while (grid[i])
	{
		while (grid[i][pos])
		{
			if (grid[i][pos] == '#')
				grid[i][pos] = lettre;
			pos++;
		}
	i++;
	pos = 0;
	lettre++;
	}
}*/

void	ft_printstrs(char **str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putstr(str[i]);
		ft_putchar('\n');
		i++;
	}
}



int main(int argc, char **argv)
{
	int i;
	char **grid;
	t_coor *coord;
	int tetrinbr;
	int z;
	char **result;
	z = 0;
	i = 0;
	if (argc != 2)
		ft_putstr("Invalid Input File");
	else
	{
		grid = read_input(argv[1]);
		ft_input_checker(grid);
		tetrinbr = ft_tetri_count(grid);
		coord = ft_get_coord(grid, tetrinbr);
	//	ft_change_letter(grid);
	//	ft_printstrs(grid);
		while (i < tetrinbr)
		{
			while (z < 4)
			{
				printf("%d%d\n", coord[i].x[z], coord[i].y[z]);
				z++;
			}
				i++;
				z = 0;
		}
		result = ft_solveit(coord,ft_max_size(tetrinbr),tetrinbr);
		ft_printstrs(result);
	}
	return (0);
}


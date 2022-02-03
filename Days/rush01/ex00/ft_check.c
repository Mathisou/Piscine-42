/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 14:46:28 by maroly            #+#    #+#             */
/*   Updated: 2021/08/18 11:49:54 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	check_row_right(int i, int *grid, int *row)
{
	int	dynamic_i;
	int	column;
	int	line;

	dynamic_i = i - i % 4 + 3;
	line = i / 4;
	column = i % 4 + (line * 4);
	if (i == 3 || i == 7 || i == 11 || i == 15)
		return (1);
	while (dynamic_i > column)
	{
		if (grid[dynamic_i] == grid[i])
			return (0);
		dynamic_i--;
	}
	if (is_value_valid(grid, i, row) == 0)
		return (0);
	return (1);
}

int	check_row_left(int i, int *grid, int *row)
{
	int	dynamic_i;
	int	column;
	int	line;

	dynamic_i = i - i % 4;
	line = i / 4 ;
	column = i % 4 + (line * 4);
	if (i == 0 || i == 4 || i == 8 || i == 12)
		return (1);
	while (dynamic_i < column)
	{
		if (grid[dynamic_i] == grid[i])
			return (0);
		dynamic_i++;
	}
	if (is_value_valid(grid, i, row) == 0)
		return (0);
	return (1);
}

int	check_col_up(int i, int *grid, int *col)
{
	int	dynamic_i;
	int	line;
	int	column;

	dynamic_i = i % 4;
	column = i / 4;
	line = i % 4 + (column * 4);
	if (i == 0 || i == 1 || i == 2 || i == 3)
		return (1);
	while (dynamic_i < line)
	{
		if (grid[dynamic_i] == grid[i])
			return (0);
		dynamic_i += 4;
	}
	if (is_value_valid(grid, i, col) == 0)
		return (0);
	return (1);
}

int	check_col_down(int i, int *grid, int *col)
{
	int	dynamic_i;
	int	line;
	int	column;

	dynamic_i = i % 4 + 12;
	column = i / 4;
	line = i % 4 + (column * 4);
	if (i == 12 || i == 13 || i == 14 || i == 15)
		return (1);
	while (dynamic_i > line)
	{
		if (grid[dynamic_i] == grid[i])
			return (0);
		dynamic_i -= 4;
	}
	if (is_value_valid(grid, i, col) == 0)
		return (0);
	return (1);
}

int	check(int i, int *grid, int *col_row)
{
	if (!(check_row_left(i, grid, col_row) == 1
			&& check_row_right(i, grid, col_row) == 1
			&& check_col_down(i, grid, col_row) == 1
			&& check_col_up(i, grid, col_row) == 1))
		return (0);
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_grid_valid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 11:48:13 by maroly            #+#    #+#             */
/*   Updated: 2021/08/18 15:36:31 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	is_row_right_valid(int *grid, int i, int *row)
{
	int	count;
	int	stock;
	int	dynamic_i;

	count = 0;
	stock = 0;
	dynamic_i = i / 4 * 4 + 3;
	while (dynamic_i >= i / 4 * 4)
	{
		if (grid[dynamic_i] == 0)
			return (1);
		if (stock < grid[dynamic_i])
		{
			stock = grid[dynamic_i];
			count++;
		}
		if (!(row[i / 4 + 12] == count) && dynamic_i % 4 == 0)
			return (0);
		dynamic_i--;
	}
	return (1);
}

int	is_col_up_valid(int *grid, int i, int *col)
{
	int	dynamic_i;
	int	count;
	int	stock;

	dynamic_i = i % 4;
	count = 0;
	stock = 0;
	while (dynamic_i < 16)
	{
		if (grid[dynamic_i] == 0)
			return (1);
		if (stock < grid[dynamic_i])
		{
			stock = grid[dynamic_i];
			count++;
		}
		if (!(col[i % 4] == count) && dynamic_i >= 12)
			return (0);
		dynamic_i += 4;
	}
	return (1);
}

int	is_row_left_valid(int *grid, int i, int *row)
{
	int	line;
	int	dynamic_i;
	int	count;
	int	stock;

	stock = 0;
	count = 0;
	line = i / 4;
	dynamic_i = line * 4;
	while (dynamic_i / 4 == line)
	{
		if (grid[dynamic_i] == 0)
			return (1);
		if (stock < grid[dynamic_i])
		{
			stock = grid[dynamic_i];
			count++;
		}
		if (!(row[dynamic_i / 4 + 8] == count) && dynamic_i % 4 == 3)
			return (0);
		dynamic_i++;
	}
	return (1);
}

int	is_col_down_valid(int *grid, int i, int *col)
{
	int	dynamic_i;
	int	count;
	int	stock;

	dynamic_i = i % 4 + 12;
	count = 0;
	stock = 0;
	while (dynamic_i > 3)
	{
		if (grid[dynamic_i] == 0)
			return (1);
		if (stock < grid[dynamic_i])
		{
			stock = grid[dynamic_i];
			count++;
		}
		if (!(col[dynamic_i % 4 + 4] == count) && dynamic_i <= 3)
			return (0);
		dynamic_i -= 4;
	}
	return (1);
}

int	is_value_valid(int *grid, int i, int *col_row)
{
	if (is_row_right_valid(grid, i, col_row)
		&& is_row_left_valid(grid, i, col_row)
		&& is_col_up_valid(grid, i, col_row)
		&& is_col_down_valid(grid, i, col_row))
		return (1);
	return (0);
}

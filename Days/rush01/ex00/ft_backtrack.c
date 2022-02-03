/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 15:54:26 by maroly            #+#    #+#             */
/*   Updated: 2021/08/18 11:27:40 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_grid(int *grid)
{
	int	x;

	x = 0;
	while (grid[x])
	{
		ft_putchar(grid[x] + 48);
		x++;
		if (x % 4 == 0)
			ft_putchar('\n');
		else
			ft_putchar(' ');
	}
}

int	backtrack(int *grid, int x, int *col_row)
{
	int	value;

	value = 0;
	if (x > 15)
		return (1);
	while (++value <= 4)
	{
		grid[x] = value;
		if (check(x, grid, col_row))
			if (backtrack(grid, x + 1, col_row))
				return (1);
	}
	grid[x] = 0;
	return (0);
}

void	is_valid(int *grid, int *col_row)
{
	if (backtrack(grid, 0, col_row) == 1)
		print_grid(grid);
	else
		print_error();
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 12:50:51 by maroly            #+#    #+#             */
/*   Updated: 2021/08/24 14:26:24 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	print_solution(int tab[10])
{
	int	x;

	x = 0;
	while (x <= 9)
	{
		tab[x] += 48;
		write(1, &tab[x], 1);
		tab[x] -= 48;
		x++;
	}
	write(1, "\n", 1);
}

int	check_diagonal(int x, int tab[10], int value)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (value == tab[x - i] - i || value == tab[x - i] + i)
			return (0);
		i++;
	}
	return (1);
}

int	check_col_row(int x, int tab[10], int value)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (tab[i] == value)
			return (0);
		i++;
	}
	return (1);
}

int	ft_backtrack(int tab[10], int x)
{
	int	value;
	int	count;

	count = 0;
	value = 0;
	while (value <= 9)
	{
		if (((check_col_row(x, tab, value)) == 0
				|| check_diagonal(x, tab, value) == 0) && ++value)
			continue ;
		tab[x] = value;
		if (x == 9)
		{
			print_solution(tab);
			count++;
		}
		else
			count += ft_backtrack(tab, x + 1);
		value++;
	}
	return (count);
}

int	ft_ten_queens_puzzle(void)
{
	int	tab[10];
	int	i;

	i = 0;
	while (i < 10)
	{
		tab[i] = 0;
		i++;
	}
	return (ft_backtrack(tab, 0));
}

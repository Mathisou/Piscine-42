/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 10:31:56 by maroly            #+#    #+#             */
/*   Updated: 2021/08/18 11:10:39 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	print_error(void)
{
	write(1, "Error\n", 6);
}

int	*ft_atoi(char *str)
{
	int	i;
	int	j;
	int	*input;

	i = 0;
	j = 0;
	input = malloc(sizeof(*input) * 16);
	if (input == NULL)
		return (0);
	while (str[i])
	{
		if ((str[i] >= '1' && str[i] <= '4')
			&& (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			input[j] = str[i] - '0';
			i = i + 2;
			j++;
			if (str[i - 1] == '\0')
				return (input);
		}
		else
			return (0);
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	*input;
	int	*grid;

	if (ac != 2 || ft_atoi(av[1]) == 0)
	{
		print_error();
		return (0);
	}
	input = ft_atoi(av[1]);
	grid = ft_init_grid();
	is_valid(grid, input);
	free(input);
	free(grid);
	return (0);
}

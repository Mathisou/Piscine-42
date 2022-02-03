/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_result.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 17:18:44 by maroly            #+#    #+#             */
/*   Updated: 2021/08/26 17:28:47 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
void	check_ac(int ac, char **av, int count, int j)
{
	int	number;

	if (check_c(av[1]) == 2)
		number = 1;
	else
		number = 2;
	if (ac > number + 2)
		print_name(av[j], count);
}

void	pre_print(int ac, char **av, int j)
{
	int		i;
	int		count;
	char	*str;

	count = 0;
	str = NULL;
	while (j < ac)
	{
		i = size_to_malloc(av, j);
		if (!(i == -1))
		{
			str = malloc(sizeof(*str) * (i + 1));
			check_ac(ac, av, count, j);
			ft_tail(av, i, str, j);
			free(str);
			count++;
		}
		j++;
	}
}

void	standard_input_for_ac2(char **av)
{
	char	buffer[2048];
	int		i;
	int		number;

	i = 0;
	number = 0;
	while (read(0, &buffer[i], 1) > 0)
		i++;
	if (check_arg(av[1]) == 1)
		number = ft_atoi(av[1]) + 1;
	if (number > i)
		number = i + 1;
	while (--number > 0)
		ft_putchar(buffer[i - number]);
}

void	standard_input_for_ac3(char **av)
{
	char	buffer[2048];
	int		i;
	int		number;

	i = 0;
	number = 0;
	while (read(0, &buffer[i], 1) > 0)
		i++;
	if (check_arg(av[2]) == 1)
		number = ft_atoi(av[2]) + 1;
	if (number > i)
		number = i + 1;
	while (--number > 0)
		ft_putchar(buffer[i - number]);
}

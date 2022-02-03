/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_result.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:26:42 by maroly            #+#    #+#             */
/*   Updated: 2021/08/25 19:43:26 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
void	check_ac(int ac, char **av, int count)
{
	int	number;

	if (check_c(av[1]) == 2)
		number = 1;
	else
		number = 2;
	if (ac > number + 2)
		print_name(av[number + 1], count);
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
			check_ac(ac, av, count);
			ft_tail(av, i, str);
			free(str);
			count++;
		}
		j++;
	}
}

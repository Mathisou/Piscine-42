/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:49:17 by maroly            #+#    #+#             */
/*   Updated: 2021/08/26 16:55:54 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
void	support(char **av)
{
	int	i;
	int	j;

	i = 1;
	j = -1;
	ft_putstr(basename(av[0]));
	ft_putstr(": illegal offset -- ");
	if (check_c(av[1]) == 3)
		while (av[1][++j])
			ft_putchar(av[1][j]);
	else if (check_c(av[1]) == 4)
	{
		j = 0;
		while (av[1][++j])
			ft_putchar(av[1][j]);
	}
	else if (check_c(av[1]) == 0)
		while (av[1][++i])
			ft_putchar(av[1][i]);
	else if (check_arg(av[2]) == 0 && check_c(av[1]) != 2)
		while (av[2][++j])
			ft_putchar(av[2][j]);
}

void	print_requirement(char **av)
{
	ft_putstr(basename(av[0]));
	ft_putstr(": option requires an argument -- c\n");
}

int	check_error(char **av, int ac)
{
	int	i;
	int	j;
	int	check;

	i = 1;
	j = -1;
	check = check_c(av[1]);
	if (check == 1 && ac == 2)
	{
		print_requirement(av);
		ft_putstr("usage: ");
		ft_putstr(basename(av[0]));
		ft_putstr(" [-F | -f | -r] [-q] ");
		ft_putstr("[-b # | -c # | -n #] [file ...]\n");
		return (0);
	}
	if (!(check == 1 || check == 2) || (check_arg(av[2]) == 0 && check != 2))
	{
		support(av);
		ft_putchar('\n');
		return (0);
	}
	return (1);
}

int	check_arg(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	give_j_a_value(char **av)
{
	if (check_c(av[1]) == 2)
		return (2);
	else
		return (3);
}

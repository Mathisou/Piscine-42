/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_arg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaucheu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 10:26:07 by mfaucheu          #+#    #+#             */
/*   Updated: 2021/08/24 12:34:05 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

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

int	main_check(int ac, char **av)
{
	if (ac == 2)
	{
		if (check_arg(av[1]) == 0)
		{
			ft_putstr("Error\n");
			return (0);
		}
	}
	if (ac == 3)
	{
		if (check_arg(av[2]) == 0)
		{
			ft_putstr("Error\n");
			return (0);
		}
		//else if (ft_strlen(av[1]) < 1)
		//{
		//	ft_putstr("Dict Error\n");
		//	return (0);
		//}
	}
	return (1);
}

int is_dict_valid(char *dict)
{
	int check;

	check = open(dict, O_RDONLY);
	if (check == -1)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	return (1);
}

int	main(int ac, char **av)
{
	char	*str;
	char	*dict;

	if (!(ac == 2 || ac == 3))
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (main_check(ac, av) == 0)
		return (0);
	else if (ac == 2)
	{
		str = av[1];
		dict = "numbers.dict";
	}
	else
	{
		if (is_dict_valid(av[1]) == 0)
			return (0);
		str = av[2];
		dict = av[1];
	}
	ft_core(str, dict);
	return (0);
}

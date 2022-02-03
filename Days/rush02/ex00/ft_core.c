/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   above_20.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 20:14:22 by maroly            #+#    #+#             */
/*   Updated: 2021/08/24 13:07:12 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	check_not_zeros(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '0')
			return (1);
		i++;
	}
	return (0);
}

int	count_spaces(char **tab)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if (check_not_zeros(tab[i]))
			count++;
		i++;
	}
	return (count);
}

int	count_strings(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	print_tbl(char **tbl, char *dictpath)
{
	int	spaces;
	int	i;

	i = 0;
	spaces = count_spaces(tbl) - 1;
	while (i < count_strings(tbl))
	{
		if (check_not_zeros(tbl[i]))
		{
			if (ft_findlen(tbl[i]) == 2)
			{
				if ((ft_atoi(tbl[i]) > 20) && (ft_atoi(tbl[i]) % 10 != 0))
					print_decomp(tbl[i], dictpath);
				else
					ft_putstr(stock_dict(tbl[i], dictpath));
			}
			else
			{
				ft_putstr(stock_dict(tbl[i], dictpath));
			}
			if (spaces > 0)
				ft_putchar(' ');
			spaces--;
		}
		i++;
	}
}

void	ft_core(char *number, char *dictpath)
{
	char	**tbl;

	if (ft_findlen(number) > 1)
	{
		tbl = malloc(sizeof(**tbl) * 20000);//(count_decomp(number) + 1));
		if (tbl == NULL)
			return ;
		decomp_tbl(number, tbl);
		atoi_check(tbl);
		print_tbl(tbl, dictpath);
		free(tbl);
	}
	else if (ft_findlen(number) == 1)
		ft_putstr(stock_dict(number, dictpath));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swillis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 21:08:41 by swillis           #+#    #+#             */
/*   Updated: 2021/08/22 22:16:11 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**atoi_check(char **tbl)
{
	int	num;
	int	i;

	num = count_strings(tbl);
	i = 0;
	while (tbl[i])
	{
		if ((ft_findlen(tbl[i]) == 2) && ((ft_atoi(tbl[i]) < 20)
				&& (ft_atoi(tbl[i]) >= 10)))
		{
			if (i == count_strings(tbl) - 2)
			{
				tbl[i][1] = tbl[i + 1][0];
				tbl[i + 1] = "0";
			}
		}
		i++;
	}
	return (tbl);
}

void	print_decomp(char *str, char *dictpath)
{
	char	s[2];

	s[0] = str[1];
	s[1] = '\0';
	str[1] = '0';
	ft_putstr(stock_dict(str, dictpath));
	ft_putchar(' ');
	ft_putstr(stock_dict(s, dictpath));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decomp_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 20:51:01 by maroly            #+#    #+#             */
/*   Updated: 2021/08/24 14:31:11 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft.h"

char	*digit_0(char *s, int i, char *number)
{
	while (i < ft_findlen(number))
	{
		s[i] = '0';
		i++;
	}
	return (s);
}

int	size_2(char *number, char **tbl, int i)
{
	tbl[i] = malloc(sizeof(*tbl) * 3);
	tbl[i][0] = number[0];
	if (ft_findlen(number) > 2)
		tbl[i][1] = number[1];
	else
		tbl[i][1] = '0';
	tbl[i][2] = '\0';
	i++;
	tbl[i] = malloc(sizeof(*tbl) * ft_findlen(number));
	if (number[0] != '0' && ft_findlen(number) > 2)
		tbl[i][0] = '1';
	else
		tbl[i][0] = number[1];
	digit_0(tbl[i], 1, number);
	tbl[i][ft_findlen(tbl[i]) - 1] = '\0';
	return (i + 1);
}

int	size_1(char *number, char **tbl, int i, int j)
{
	tbl[i] = malloc(sizeof(*tbl) * 2);
	tbl[i][0] = number[j];
	tbl[i][1] = '\0';
	i++;
	tbl[i] = malloc(sizeof(*tbl) * (ft_findlen(number) + 1));
	if (number[j] != '0' || j == 2)
		tbl[i][0] = '1';
	else
		tbl[i][0] = '0';
	digit_0(tbl[i], 1, &number[j]);
	tbl[i][ft_findlen(number)] = '\0';
	return (i + 1);
}

int	size_0(char *number, char **tbl, int i)
{
	tbl[i] = malloc(sizeof(*tbl) * 2);
	tbl[i][0] = number[0];
	tbl[i][1] = '\0';
	i++;
	tbl[i] = malloc(sizeof(*tbl) * (ft_findlen(number) + 1));
	if (number[0] != '0')
		tbl[i][0] = '1';
	else
		tbl[i][0] = '0';
	digit_0(tbl[i], 1, number);
	tbl[i][3] = '\0';
	return (i + 1);
}

char	**decomp_tbl(char *number, char **tbl)
{
	int	j;
	int	i;
	int	size;

	j = 0;
	i = 0;
	size = 0;
	while (number[j] && j < ft_findlen(number) - 1)
	{
		size = ft_findlen(&number[j]) % 3;
		if (size == 0)
			i = size_0(&number[j], tbl, i);
		else if (size == 1)
			i = size_1(number, tbl, i, j);
		else
		{
			i = size_2(&number[j], tbl, i);
			j++;
		}
		j++;
	}
	tbl[i] = 0;
	return (tbl);
}

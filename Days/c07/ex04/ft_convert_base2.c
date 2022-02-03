/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:51:00 by maroly            #+#    #+#             */
/*   Updated: 2021/08/14 09:07:06 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	if (ft_strlen(base) < 2 || base[i] == '+' || base[i] == '-'
		|| (base[i] >= 9 && base[i] <= 13) || base[i] == 32)
		return (0);
	while (base[i])
	{
		while (base[j])
		{
			if (base[i] == base[j] || base[j] == '+'
				|| base[j] == '-' || (base[j] >= 9
					&& base[j] <= 13) || base[i] == 32)
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

int	len(int nb, int size_of_base)
{
	int			size;
	long int	nbr;

	size = 0;
	nbr = nb;
	if (nbr == -2147483648)
	{
		nbr = -nbr;
		size++;
	}
	if (nbr < 0)
	{
		nbr = -nbr;
		size++;
	}
	if (nbr < size_of_base)
		return (size);
	while (nbr >= size_of_base)
	{
		nbr = nbr / size_of_base;
		size++;
	}
	return (size);
}

int	is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	find_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 09:22:59 by maroly            #+#    #+#             */
/*   Updated: 2021/08/11 15:13:03 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_base_correct(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (ft_strlen(base) == 0 || ft_strlen(base) == 1
		|| base[i] == '-' || base[i] == '+')
		return (0);
	while (base[i])
	{
		while (base[j])
		{
			if (base[i] == base[j] || base[j] == '-' || base[j] == '+')
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

void	convert(long nbr, int size_of_base, char *base)
{
	long	quotient;
	long	rest;

	quotient = nbr / size_of_base;
	rest = nbr % size_of_base;
	if (quotient)
		convert(quotient, size_of_base, base);
	write(1, &base[rest], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size_of_base;
	long	nbr2;

	nbr2 = nbr;
	size_of_base = ft_strlen(base);
	if (is_base_correct(base) == 1)
	{
		if (nbr2 < 0)
		{
			nbr2 *= -1;
			write(1, "-", 1);
		}
		convert(nbr2, size_of_base, base);
	}
	else
		return ;
}

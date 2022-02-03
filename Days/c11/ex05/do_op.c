/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 12:22:00 by maroly            #+#    #+#             */
/*   Updated: 2021/08/20 11:59:07 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}

int	is_valid(char *str, int ac)
{
	if (ac != 4)
		return (0);
	if (!((str[0] == '+' || str[0] == '-' || str[0] == '/'
				|| str[0] == '*' || str[0] == '%') && ft_strlen(str) == 1))
	{
		write(1, "0\n", 2);
		return (0);
	}
	return (1);
}

int	check_operator(char c)
{
	char	*str;
	int		i;

	i = 0;
	str = "+/%-*";
	while (str[i] != c)
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int	nb1;
	int	nb2;
	int	(*f[5])(int nb1, int nb2);
	int	i;

	i = 0;
	if (is_valid(av[2], ac) == 0)
		return (0);
	nb1 = ft_atoi(av[1]);
	nb2 = ft_atoi(av[3]);
	f[0] = &sum;
	f[1] = &div;
	f[2] = &mod;
	f[3] = &sub;
	f[4] = &mul;
	i = check_operator(av[2][0]);
	if (divmod_by_zero(i, nb2) != 0)
	{
		ft_putnbr(f[i](nb1, nb2));
		ft_putchar('\n');
	}
	return (0);
}

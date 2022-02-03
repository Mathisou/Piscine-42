/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:33:35 by maroly            #+#    #+#             */
/*   Updated: 2021/08/25 19:44:06 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_atoi(char *str)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (!(str[i] >= '0' && str[i] <= '9'))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result);
}

void	stock_file(char *str, char *file_name, int nb)
{
	int	i;
	int	fd;

	i = 0;
	fd = open(file_name, O_RDONLY);
	while (read(fd, &str[i], 1))
		i++;
	close(fd);
	while (nb > 0)
	{
		ft_putchar(str[i - nb]);
		nb--;
	}
}

int	main(int ac, char **av)
{
	int	count;
	int	j;

	count = 0;
	if (ac < 2 || (check_c(av[1]) == 2 && ac == 2)
		|| (check_c(av[1]) == 1 && ac == 3 && check_arg(av[2])))
		standard_output();
	j = give_j_a_value(av);
	if (check_error(av, ac) == 0)
		return (0);
	pre_print(ac, av, j);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:33:35 by maroly            #+#    #+#             */
/*   Updated: 2021/08/26 17:57:28 by maroly           ###   ########.fr       */
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
	//j = give_j_a_value(av);
	if (ac < 2 || (check_c(av[1]) == 2 && ac == 2) || (check_c(av[1]) == 1 && ac == 3 && check_arg(av[2]))) //|| ((av[2][0] == '>' && av[2][1] == '\0') || (av[3][0] == '>' && av[3][1] == '\0')))
	{
		standard_input(ac, av);
		return (0);
	}
	j = give_j_a_value(av);
	if (check_error(av, ac) == 0)
		return (1);
	if (av[j][0] == '<')
		j++;                                          //tous les cas sont gerer sauf
	pre_print(ac, av, j);								 // les < et > en av[2] ou av[3]
	return (0);
}

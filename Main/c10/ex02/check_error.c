/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 13:33:14 by maroly            #+#    #+#             */
/*   Updated: 2021/08/25 19:42:41 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
void	print_name(char *str, int count)
{
	if (count > 0)
		ft_putchar('\n');
	ft_putstr("==> ");
	ft_putstr(str);
	ft_putstr(" <==\n");
}

void	standard_output(void)
{
	char	buffer[2048];

	while (1)
		read(0, &buffer, 2048);
}

int	check_c(char *str)
{
	int	i;

	i = 2;
	if (str[0] == '-' && str[1] == 'c' && str[2] == '\0')
		return (1);
	if (str[0] != '-')
		return (3);
	if (str[1] != 'c')
		return (4);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (2);
}

int	size_to_malloc(char **av, int j)
{
	int		fd;
	int		i;
	char	currchar;

	i = 0;
	fd = open(av[j], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr(basename(av[0]));
		ft_putstr(": ");
		ft_putstr(av[j]);
		ft_putstr(": ");
		ft_putstr(strerror(errno));
		write(1, "\n", 1);
		return (-1);
	}
	while (read(fd, &currchar, 1))
		i++;
	return (i);
}

void	ft_tail(char **av, int i, char *str)
{
	int	number;

	if (check_c(av[1]) == 2)
		number = 1;
	else
		number = 2;
	if (ft_atoi(av[number]) > i)
		stock_file(str, av[number + 1], i);
	else
		stock_file(str, av[number + 1], ft_atoi(av[number]));
}

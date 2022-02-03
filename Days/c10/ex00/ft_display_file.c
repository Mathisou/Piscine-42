/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:02:27 by maroly            #+#    #+#             */
/*   Updated: 2021/08/25 20:09:54 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

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

int	is_file_valid(char *str)
{
	int	check;

	check = open(str, O_RDONLY);
	if (check == -1)
	{
		ft_putstr("Cannot read file.\n");
		return (1);
	}
	close(check);
	return (0);
}

void	whats_inside_file(char *file_name)
{
	char	c;
	int		file;

	file = open(file_name, O_RDONLY);
	while (read(file, &c, 1))
		write(1, &c, 1);
	close(file);
}

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	if (ac > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	if (is_file_valid(av[1]) == 1)
		return (1);
	whats_inside_file(av[1]);
	return (0);
}

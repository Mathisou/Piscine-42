/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:16:55 by maroly            #+#    #+#             */
/*   Updated: 2021/08/26 11:47:32 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <sys/errno.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <libgen.h>

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

void	ft_cat(int ac, char **av)
{
	int		fd;
	int		i;
	char	c;

	i = 1;
	while (i < ac)
	{
		fd = open(av[i], O_RDWR);
		if (fd == -1)
		{
			ft_putstr(basename(av[0]));
			ft_putstr(": ");
			ft_putstr(av[i]);
			ft_putstr(": ");
			ft_putstr(strerror(errno));
			write(1, "\n", 1);
		}
		while (fd != -1 && read(fd, &c, 1))
			write(1, &c, 1);
		i++;
		close(fd);
	}
}

int	main(int ac, char **av)
{
	char	buffer[2048];

	if (ac < 2 || (av[1][0] == '-' && av[1][1] == '\0'))
	{
		while (read(0, &buffer, 1) > 0)
			write(1, &buffer, 1);
		return (0);
	}
	ft_cat(ac, av);
	return (0);
}

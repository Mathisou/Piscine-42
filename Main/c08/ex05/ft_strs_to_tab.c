#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(*dest) * ft_strlen(src) + 1);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*s_av;
	int			i;

	i = 0;
	s_av = malloc(sizeof(*s_av) * ac + 1);
	if (s_av == NULL)
		return (NULL);
	while (av[i] && i < ac)
	{
		s_av[i].size = ft_strlen(av[i]);
		s_av[i].str = malloc(sizeof(char) * s_av[i].size + 1);
		if (s_av[i].str == NULL)
			return (NULL);
		s_av[i].str = av[i];
		s_av[i].copy = malloc(sizeof(char) * s_av[i].size + 1);
		if (s_av[i].copy == NULL)
			return (NULL);
		s_av[i].copy = ft_strdup(av[i]);
		i++;
	}
	s_av[i].str = 0;
	return (s_av);
}

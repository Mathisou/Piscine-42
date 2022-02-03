/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stock_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 14:42:53 by maroly            #+#    #+#             */
/*   Updated: 2021/08/24 17:53:47 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

char	*parse_str(char *str, char *find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == find[j])
		{
			i++;
			j++;
			if (find[j] == '\0' && str[i + 1] != '0')
			{
				return (&str[i]);
			}
		}
		i++;
		j = 0;
	}
	return (0);
}

char	*malloc_result(char *str)
{
	char	*result;
	int		count;
	int		i;
	int		j;

	count = 0;
	i = 0;
	j = 0;
	while (str[i] != '\n')
	{
		if (str[i] == ' ')
			count++;
		i++;
		while (str[i] == ' ' && count > 0)
		{
			i++;
			j++;
		}
		count = 0;
	}
	result = malloc(sizeof(*result) * (i - j + 1));
	if (result == NULL)
		return (NULL);
	return (result);
}

char	*skip_second_space(char *str)
{
	char	*result;
	int		count;
	int		i;
	int		j;

	count = 0;
	i = 0;
	j = 0;
	result = malloc_result(str);
	while (str[i] != '\n')
	{
		if (str[i] == ' ')
			count++;
		result[j] = str[i];
		i++;
		j++;
		while (str[i] == ' ' && count > 0)
			i++;
		count = 0;
	}
	if (result [j - 1] == ' ')
		result[j - 1] = 0;
	else
		result[j] = '\0';

	return (result);
}

char	*skip_space(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] == ' ')
	{
		if (!(str[i] == ':' || str[i] == ' '))
		{
			ft_putstr("Dict Error\n");
			return (0);
		}
		i++;
	}
	if (str[i] == ':')
		i++;
	while (str[i] == ' ')
	{
		i++;
	}
	return (skip_second_space(&str[i]));
}

char	*stock_dict(char *number, char *dictpath)
{
	int		i;
	int		j;
	int		dict;
	char	currchar;
	char	*str;

	i = 0;
	j = 0;
	dict = open(dictpath, O_RDONLY);
	while (read(dict, &currchar, 1))
		i++;
	str = malloc(sizeof(*str) * (i + 1));
	if (str == NULL)
		return (NULL);
	close(dict);
	dict = open(dictpath, O_RDONLY);
	while (read(dict, &str[j], 1))
		j++;
	close(dict);
	return (skip_space(parse_str(str, number)));
}

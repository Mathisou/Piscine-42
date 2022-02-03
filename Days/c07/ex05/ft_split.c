/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 12:12:54 by maroly            #+#    #+#             */
/*   Updated: 2021/08/25 16:26:37 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	is_not_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (str[i])
	{
		if ((is_not_sep(str[i], charset)
				&& (i == 0 || !is_not_sep(str[i - 1], charset))) && str[i])
		{
			size++;
		}
		i++;
	}
	return (size);
}

char	*put_str_in_tab(char *str, char *charset)
{
	char	*strs;
	int		i;

	i = 0;
	while (str[i] && is_not_sep(str[i], charset))
		i++;
	strs = malloc(sizeof(*strs) * (i + 1));
	if (strs == NULL)
		return (NULL);
	i = 0;
	while (str[i] && is_not_sep(str[i], charset))
	{
		strs[i] = str[i];
		i++;
	}
	strs[i] = 0;
	return (strs);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		string;
	char	**tab;

	i = 0;
	string = 0;
	tab = malloc(sizeof(*tab) * (count_words(str, charset) + 1));
	if (tab == NULL)
		return (NULL);
	while (str[i])
	{
		while (!is_not_sep(str[i], charset) && str[i])
			i++;
		if ((is_not_sep(str[i], charset)
				&& (i == 0 || !is_not_sep(str[i - 1], charset))) && str[i])
		{
			tab[string] = put_str_in_tab(&str[i], charset);
			string++;
		}
		if (str[i])
			i++;
	}
	tab[string] = NULL;
	return (tab);
}
#include <stdio.h>
int main(int ac, char **av)
{
	(void) ac;
	int i;
	char **tab;

	i = 0;
	tab = malloc(sizeof(*tab) * count_words(av[1], av[2]) + 1);
	tab = ft_split(av[1], av[2]);
	while (i < count_words(av[1], av[2]))
	{
		printf("%s\n", tab[i]);
		i++;
	}
}

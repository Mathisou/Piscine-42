/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 07:42:39 by maroly            #+#    #+#             */
/*   Updated: 2021/08/25 16:27:18 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	is_not_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (0);
		i++;
	}
	return (1);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (((!is_not_sep(str[i - 1], charset) || i == 0)
				&& is_not_sep(str[i], charset)) && str[i])
			count++;
		i++;
	}
	return (count);
}

char	*put_str_in_tab(char *str, char *charset)
{
	int		i;
	char	*tab;

	i = 0;
	while (str[i] && is_not_sep(str[i], charset))
		i++;
	tab = malloc(sizeof(*tab) * (i + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (str[i] && is_not_sep(str[i], charset))
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = 0;
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		string;

	i = 0;
	string = 0;
	tab = malloc(sizeof(*tab) * (count_words(str, charset) + 1));
	if (tab == NULL)
		return (NULL);
	while (str[i])
	{
		while (str[i] && !is_not_sep(str[i], charset))
			i++;
		if (((!is_not_sep(str[i - 1], charset) || i == 0)
				&& is_not_sep(str[i], charset)) && str[i])
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

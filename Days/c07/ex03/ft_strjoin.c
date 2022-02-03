/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 17:52:35 by maroly            #+#    #+#             */
/*   Updated: 2021/08/16 12:20:52 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*create_str(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		sizetomalloc;

	i = 0;
	sizetomalloc = 0;
	while (i < size)
	{
		sizetomalloc += ft_strlen(strs[i]);
		i++;
	}
	sizetomalloc += ft_strlen(sep) * (size - 1);
	if (size <= 0)
		sizetomalloc = 1;
	str = malloc(sizeof(*str) * (sizetomalloc + 1));
	if (str == NULL)
		return (NULL);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	k = 0;
	i = -1;
	str = create_str(size, strs, sep);
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str[k++] = strs[i][j];
			j++;
		}
		j = 0;
		while (sep[j] && i != size - 1)
		{
			str[k++] = sep[j];
			j++;
		}
	}
	str[k] = '\0';
	return (str);
}

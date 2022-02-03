/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 12:42:45 by maroly            #+#    #+#             */
/*   Updated: 2021/08/05 12:44:30 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str = ft_strlowcase(str);
	while (str[i])
	{
		if ((!((str[i - 1] >= 65 && str[i - 1] <= 90)
					|| (str[i - 1] >= 97 && str[i - 1] <= 122)
					|| (str[i - 1] >= 48 && str[i - 1] <= 57))
				&& (str[i] >= 97 && str[i] <= 122)))
			str[i] -= 32;
		i++;
	}
	return (str);
}

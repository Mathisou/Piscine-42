/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:37:53 by maroly            #+#    #+#             */
/*   Updated: 2021/08/14 09:13:28 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
		return (0);
	tab = malloc(sizeof(int) * size);
	if (tab == NULL)
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_decomp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 12:02:49 by maroly            #+#    #+#             */
/*   Updated: 2021/08/24 12:12:32 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft.h"

int	count_decomp(char *number)
{
	int	j;
	int count;
	int size;

	size = 0;
	j = 0;
	count = 0;
	while (number[j] && j < ft_findlen(number) - 1)
	{
		size = ft_findlen(&number[j]) % 3;
		if (size == 0)
			count += 2;
		else if (size == 1)
			count += 2;
		else
			count += 1;
		j++;
	}
	printf("%d\n",count);
	return (count);
}

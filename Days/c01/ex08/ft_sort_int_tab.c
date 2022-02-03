/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:43:18 by maroly            #+#    #+#             */
/*   Updated: 2021/08/04 13:09:31 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (size > 0)
	{
		while (i < size)
		{
			if (tab[i] > tab[size - 1])
			{
				swap = tab[i];
				tab[i] = tab[size - 1];
				tab[size - 1] = swap;
			}
			i++;
		}
		i = 0;
		size--;
	}
}

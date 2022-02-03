/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 10:47:01 by maroly            #+#    #+#             */
/*   Updated: 2021/08/24 14:36:41 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	j;
	int	sens;

	i = 0;
	j = 0;
	sens = 0;
	while (i < length - 1)
	{
		sens = f(tab[i], tab[i + 1]);
		if (sens > 0 && j == 0)
			j = 1;
		else if (sens < 0 && j == 0)
			j = -1;
		if (j == 1 && sens < 0)
			return (0);
		else if (j == -1 && sens > 0)
			return (0);
		i++;
	}
	return (1);
}

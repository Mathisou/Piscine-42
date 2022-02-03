/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 21:25:42 by maroly            #+#    #+#             */
/*   Updated: 2021/08/08 15:20:46 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 19:49:42 by maroly            #+#    #+#             */
/*   Updated: 2021/08/06 21:10:45 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	count;
	int	result;

	i = 0;
	count = 1;
	result = 0;
	while (str[i])
	{
		while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				count *= -1;
			i++;
		}
		while (str[i] >= 48 && str[i] <= 57)
		{
			result = result * 10 + str[i] - 48;
			i++;
		}
		return (result * count);
	}
	return (0);
}

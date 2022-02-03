/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 12:06:32 by maroly            #+#    #+#             */
/*   Updated: 2021/08/23 16:19:02 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	hexa(unsigned char nb)
{
	if (nb <= 9)
		return ('0' + nb);
	return (97 + nb - 10);
}

void	deci_to_hexa(unsigned char ascii_value)
{
	ft_putchar(hexa(ascii_value / 16));
	ft_putchar(hexa(ascii_value % 16));
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_putchar('\\');
			deci_to_hexa(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main()
{
	char str[50] = "Coucou\ntu va🐹s bien ?";

	ft_putstr_non_printable(str);
}

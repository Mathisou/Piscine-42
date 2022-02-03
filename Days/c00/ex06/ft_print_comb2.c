/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 15:44:34 by maroly            #+#    #+#             */
/*   Updated: 2021/08/08 18:11:53 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_printchar(int a, int b)
{
	int	c;

	c = a / 10 + 48;
	write(1, &c, 1);
	c = a % 10 + 48;
	write(1, &c, 1);
	write(1, " ", 1);
	c = b / 10 + 48;
	write(1, &c, 1);
	c = b % 10 + 48;
	write(1, &c, 1);
	if (a != 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_printchar(a, b);
			b++;
		}
		a++;
	}
}

int main()
{
	ft_print_comb2();
}

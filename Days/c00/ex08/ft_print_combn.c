/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 14:03:23 by maroly            #+#    #+#             */
/*   Updated: 2021/08/21 09:57:41 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_comb1(void)
{
	int	i;

	i = 0;
	while (i <= 9)
	{
		ft_putchar(i + 48);
		if (i != 9)
			write(1, ", ", 2);
		i++;
	}
}

void	is_correct(int *tab, int n)
{
	int	i;

	i = 1;
	while (i < n)
	{
		if (tab[i] <= tab[i - 1])
			return ;
		i++;
	}
	i = 0;
	while (i < n)
		ft_putchar(48 + tab[i++]);
	if (tab[0] < 10 - n)
		write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	int	i;
	int	tab[9];

	i = 0;
	if (n == 1)
		print_comb1();
	while (i < n)
		tab[i++] = 0;
	while (tab[0] <= (10 - n) && n > 1)
	{
		is_correct(tab, n);
		tab[n - 1]++;
		i = n;
		while (i)
		{
			i--;
			if (tab[i] > 9)
			{
				tab[i - 1]++;
				tab[i] = 0;
			}
		}
	}
}
#include <stdlib.h>
int main(int ac, char **av)
{
	(void) ac;
	ft_print_combn(atoi(av[1]));
}

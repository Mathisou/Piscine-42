/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 11:23:46 by maroly            #+#    #+#             */
/*   Updated: 2021/08/24 16:56:19 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = 0;
	while (i < length)
	{
		f(tab[i]); // meme chose que d'envoyer tab[i] direct a putnbr
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48);
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
}

int main()
{
	int tab[5];
	void (*f)(int) = &ft_putnbr;
	//(*f)(5) == ft_putnbr(5);
	ft_foreach(tab, 5, f);
}

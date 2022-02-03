/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:19:22 by maroly            #+#    #+#             */
/*   Updated: 2021/08/23 18:14:35 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void *is_array_printable(void *addr)
{
	int i;

	i = 0;
	while (addr[i])
	{
		if (addr[i] < 32 || addr[i] > 126)
			addr[i] = '.';
		i++;
	}
	return (addr);
}

void *ft_print_memory(void *addr, unsigned int size)
{
	is_array_printable(addr);
	printf("%s\n", addr)
}

int main()
{
	char str[7] = "Bonjour";
	char stock[16];
	stock = &str;
	void *addr = "Hello\n cv";
	printf("%s\n", stock);
	ft_print_memory(addr, 9);
}

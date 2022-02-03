/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 12:00:15 by maroly            #+#    #+#             */
/*   Updated: 2021/08/19 15:32:16 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
int ft_list_size(t_list *begin_list)
{
	int count;

	count = 0;
	while (begin_list != 0)
	{
		begin_list = begin_list->next;
		count++;
	}
	return (count);
}
#include <stdio.h>
int main()
{
	t_list *begin_list, a, b, c, d ;
	a.data = 0;
	b.data = 0;
	c.data = 0;
	d.data = 0;

	begin_list = &a;
	a.next = &b;
	b.next = &c;
	c.next = &d;
	d.next = 0;
	printf("%d\n", ft_list_size(begin_list));
}

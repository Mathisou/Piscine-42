/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:45:32 by maroly            #+#    #+#             */
/*   Updated: 2021/08/19 16:04:52 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
#include <stdio.h>
t_list *ft_list_last(t_list *begin_list)
{
	while (begin_list->next != NULL)
		begin_list = begin_list->next;
	return (begin_list);
}

int main()
{
	t_list *begin_list, a, b, c, d;
	a.data = "8";
	b.data = "1";
	c.data = "3";
	d.data = "5";

	begin_list = &a;
	a.next = &b;
	b.next = &c;
	c.next = &d;
	d.next = 0;
	printf("%s\n", ft_list_last(begin_list)->data);
}

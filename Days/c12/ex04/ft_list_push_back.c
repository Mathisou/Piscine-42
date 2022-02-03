/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:06:34 by maroly            #+#    #+#             */
/*   Updated: 2021/08/19 17:18:04 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
#include <stdio.h>
t_list *ft_create_elem(void *data);
void ft_list_push_back(t_list **begin_list, void *data)
{
	if (!*begin_list)
		*begin_list = ft_create_elem(data);
	while ((*begin_list)->next)
		(*begin_list) = (*begin_list)->next;
	(*begin_list)->next = ft_create_elem(data);
}

int main()
{
	printf("test");
	t_list **begin_list, *a, *b, *c, *d;
	a->data = "8";
	b->data = "1";
	c->data = "3";
	d->data = "5";

	begin_list = &a;
	a->next = &b; 			//non fonctionnel
	b->next = &c;
	c->next = &d;
	d->next = 0;
	ft_list_push_back(begin_list, "2");
}

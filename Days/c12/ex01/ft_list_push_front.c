/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 10:33:01 by maroly            #+#    #+#             */
/*   Updated: 2021/08/24 19:26:03 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
#include <stdio.h>
t_list *ft_create_elem(void *data);
void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_elem;

	printf("hello");
	new_elem = ft_create_elem(data);
	if (*begin_list)
		new_elem->next = *begin_list;
	*begin_list = new_elem;
	/*while (new_elem != NULL)
	{
		printf("%s\n", new_elem->data);
		new_elem = new_elem->next;
	}*/
}

int main()
{
	int a = 48;
	t_list **begin_list, *a, *b ,*c;

	a = 65;
	b = 32;
	c = 15;
	*begin_list = &a;
	a = &b;                      //pulad
	b = &c;
	ft_list_push_elem(begin_list, &a);
}

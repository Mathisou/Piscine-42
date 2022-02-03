/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 11:20:29 by maroly            #+#    #+#             */
/*   Updated: 2021/08/26 12:53:50 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include"list.h"
#include<stdio.h>
void ft_list_sort(t_list *begin_list, int (*cmp)(int, int))
{
	t_list *l;
	int swap;
	t_list *temp2;

	l = begin_list;
	while (l->next != NULL)
	{
		temp2 = l->next;
		while (temp2 != NULL)
		{
			if (cmp(l->data, temp2->data) > 0)
			{
				swap = temp2->data;
				temp2->data = l->data;
				l->data = swap;
			}
			temp2 = temp2->next;
		}
		l = l->next;
	}
	/*while (l->next != NULL)
	{
		if (cmp(l->data, l->next->data) > 0)
		{
			swap = l->data;
			l->data = l->next->data;
			l->next->data = swap;
			l = begin_list;
		}
		else
			l = l->next;
	}*/
}

int ascending(int a, int b)
{
	return (a <= b);
}

int main()
{
	t_list *a;
	t_list *b;
	t_list *c;
	t_list *d;

	a = malloc(sizeof(t_list));
	b = malloc(sizeof(t_list));
	c = malloc(sizeof(t_list));
	d = malloc(sizeof(t_list));


	a->data = 2;
	b->data = 1;
	c->data = 1;
	d->data = 0;

	a->next = b;
	b->next = c;
	c->next = d;
	d->next = NULL;
	ft_list_sort(a, (*ascending));
	while (a != NULL)
	{
		printf("%i \n", a->data);
		a = a->next;
	}
}

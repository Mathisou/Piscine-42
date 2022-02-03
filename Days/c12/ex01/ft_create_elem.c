/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 22:04:10 by maroly            #+#    #+#             */
/*   Updated: 2021/08/19 12:08:07 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
#include <stdlib.h>
#include <stdio.h>
t_list *ft_create_elem(void *data)
{
	t_list *elem1;

	elem1 = malloc(sizeof(t_list));
	if (elem1 == NULL)
		return (NULL);
	elem1->data = data;
	//elem1->next = NULL;
	//while (elem1)
	//{
	//	printf("%s\n", elem1->data);
	//	elem1 = elem1->next;
	//}
	return (elem1);
}

int main()
{
	int a = 48;
	ft_create_elem(&a);
}

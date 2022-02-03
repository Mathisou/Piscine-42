/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:19:21 by maroly            #+#    #+#             */
/*   Updated: 2021/08/24 17:11:00 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
t_list *ft_create_elem(void *data);
t_list *ft_list_push_strs(int size, char **strs)
{
	t_list	*list;
	while (size - 1 >= 0)
	{
		list = ft_create_elem(strs[size - 1]);
		list = list->next;
	}
	return (list);
}

int main()
{
	char *str[4] = 
}

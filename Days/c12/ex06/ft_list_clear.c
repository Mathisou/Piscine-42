/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 17:11:32 by maroly            #+#    #+#             */
/*   Updated: 2021/08/24 17:16:15 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
#include <stdlib.h>
void ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	while (begin_list->next != NULL)
	{
		free_fct(begin_list->data);
		begin_list = begin_list->next;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:39:45 by maroly            #+#    #+#             */
/*   Updated: 2021/08/13 11:03:33 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H
#include <unistd.h>

#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define TRUE 1
#define FALSE 0
#define SUCCESS 0
#define EVEN(nbr) (nbr % 2 == 0)
typedef int	t_bool;

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 12:38:46 by maroly            #+#    #+#             */
/*   Updated: 2021/08/18 23:11:18 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
int		sum(int nb1, int nb2);
int		div(int nb1, int nb2);
int		sub(int nb1, int nb2);
int		mod(int nb1, int nb2);
int		mul(int nb1, int nb2);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		is_number_valid(char *str);
void	ft_putchar(char c);
int		divmod_by_zero(int i, int nb2);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 10:38:41 by maroly            #+#    #+#             */
/*   Updated: 2021/08/18 11:29:21 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
int		*create_col_row(int *input);
int		*ft_init_grid(void);
int		backtrack(int *grid, int x, int *col_row);
int		check(int i, int *grid, int *col_row);
void	print_error(void);
void	print_grid(int *grid);
void	is_valid(int *grid, int *col_row);
int		is_value_valid(int *grid, int i, int *col_row);

#endif

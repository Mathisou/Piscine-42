/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 13:49:41 by maroly            #+#    #+#             */
/*   Updated: 2021/08/26 17:16:16 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdio.h>
# include <sys/errno.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdlib.h>
# include <libgen.h>
void	standard_input(int ac, char **av);
int		size_to_malloc(char **av, int j);
void	ft_tail(char **av, int i, char *str, int j);
void	stock_file(char *str, char *file_name, int nb);
int		ft_atoi(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		check_arg(char *str);
int		check_error(char **av, int ac);
int		check_c(char *str);
int		give_j_a_value(char **av);
void	pre_print(int ac, char **av, int j);
void	print_name(char *str, int count);
void	standard_input_for_ac3(char **av);
void	standard_input_for_ac2(char **av);

#endif

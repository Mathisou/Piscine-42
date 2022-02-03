/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:04:36 by maroly            #+#    #+#             */
/*   Updated: 2021/08/24 12:14:02 by maroly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
char	*stock_dict(char *number, char *dictpath);
void	ft_core(char *number, char *dictpath);
int		ft_atoi(char *str);
void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
int		ft_findlen(char *str);
char	**decomp_tbl(char *number, char **tbl);
char	**atoi_check(char **tbl);
int		count_strings(char **tab);
void	print_decomp(char *str, char *dictpath);
int		count_decomp(char *number);

#endif

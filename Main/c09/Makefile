# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maroly <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/17 05:58:36 by maroly            #+#    #+#              #
#    Updated: 2021/08/19 18:09:05 by maroly           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	=	srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_swap.c srcs/ft_strcmp.c srcs/ft_strlen.c

OBJS	= ${SRCS:.c=.o}

CC = gcc

FLAGS =	-Wall -Wextra -Werror

NAME = libft.a

.c.o:
		${CC} ${FLAGS} -I includes -c $< -o ${<.c=.o}

all:	${NAME}

${NAME}:	${OBJS}
					ar rc ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:	clean
			rm -f ${NAME}

re:  fclean all

.PHONY: all clean fclean re

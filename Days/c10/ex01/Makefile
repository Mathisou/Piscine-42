# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maroly <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/24 19:10:20 by maroly            #+#    #+#              #
#    Updated: 2021/08/25 19:57:15 by maroly           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	${wildcard *.c}

OBJS	=	${SRCS:.c=.o}

CC		=	gcc

FLAGS	=	-Wall -Wextra -Werror

NAME	=	ft_cat

.c.o:
			${CC} ${FLAGS} -c $<


all: 		${NAME}


${NAME}: 	${OBJS}
			${CC} ${FLAGS} -o $@ $^


clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re: fclean all

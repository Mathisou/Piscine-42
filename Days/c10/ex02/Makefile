# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maroly <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/24 19:10:20 by maroly            #+#    #+#              #
#    Updated: 2021/08/26 17:56:03 by maroly           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	${wildcard *.c}

OBJS	=	${SRCS:.c=.o}

CC		=	gcc

FLAGS	=	-Wall -Wextra -Werror

NAME	=	ft_tail

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

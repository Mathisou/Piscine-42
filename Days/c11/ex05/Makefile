# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maroly <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/18 21:11:13 by maroly            #+#    #+#              #
#    Updated: 2021/08/24 17:09:17 by maroly           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ${wildcard *.c}

OBJS = ${SRCS:.c=.o}

CC = gcc

FLAGS = -Wall -Wextra -Werror

NAME = do-op

all: ${NAME}

.c.o:
	${CC} ${FLAGS} -c $<

${NAME}: ${OBJS}
	${CC} ${FLAGS} -o $@ $^

clean: 
				rm -f ${OBJS}

fclean:   clean
				rm -f ${NAME}

re:		fclean all

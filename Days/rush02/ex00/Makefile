# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maroly <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/21 10:24:43 by maroly            #+#    #+#              #
#    Updated: 2021/08/21 14:23:41 by maroly           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ${wildcard *.c}

OBJS	= ${SRCS:.c=.o}

CC = gcc

FLAGS = -Wall -Wextra -Werror

NAME = rush-02

all: ${NAME}


.c.o:
		${CC} ${FLAGS} -c $<


${NAME}:	${OBJS}
			${CC} ${FLAGS} -o $@ $^

clean: 
			rm -f ${OBJS}

fclean: clean
		rm -f ${NAME}

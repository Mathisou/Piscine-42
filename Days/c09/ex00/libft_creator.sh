#!/bin/sh
gcc -Wall -Werror -Wextra -c *.c
ar cr libft.a *.o
rm -rf *.o
ranlib libft.a

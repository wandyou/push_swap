# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/23 18:55:57 by nlafarge          #+#    #+#              #
#    Updated: 2021/08/23 19:20:48 by nlafarge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = clang
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror

LIB = srcs/lib/ft_atoi.c

UTILS = srcs/utils/ft_error.c \
		srcs/utils/ft_clean.c \
		srcs/utils/ft_struct_init.c \
		srcs/utils/ft_check_num.c

SRCS = srcs/main.c \
	${UTILS} \
	${LIB}

OBJS = ${SRCS:.c=.o}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:
	make ${NAME}

${NAME}: ${OBJS} push_swap.h
		${CC} -o ${NAME} ${OBJS} ${CFLAGS}

clean:
	${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:		fclean all

.PHONY: clean all fclean re
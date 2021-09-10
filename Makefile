# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/23 18:55:57 by nlafarge          #+#    #+#              #
#    Updated: 2021/09/10 16:37:42 by nathanlafar      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = clang
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address

LIB = srcs/lib/ft_atoi.c \
	srcs/lib/ft_strlen.c

CHECKERS = srcs/checkers/ft_check_arg.c \
			srcs/checkers/ft_check_num.c \
			srcs/checkers/ft_check_duplicate.c

UTILS = srcs/utils/ft_error.c \
		srcs/utils/ft_success.c \
		srcs/utils/ft_clean.c \
		srcs/utils/ft_struct_init.c \
		srcs/utils/ft_is_sorted.c \
		srcs/utils/ft_print_stack.c \
		srcs/utils/ft_exit.c \
		srcs/utils/ft_stack_a_malloc.c \
		srcs/utils/ft_stack_tmp_a_malloc.c \
		srcs/utils/ft_stack_tmp_b_malloc.c \
		srcs/utils/ft_find_min_pos.c \
		srcs/utils/ft_isolate_min.c \
		srcs/utils/ft_find_range.c \
		srcs/utils/ft_create_sorted_list.c \
		srcs/utils/ft_copy_list.c \
		srcs/utils/ft_display_stacks.c \
		srcs/utils/ft_find_from_top.c \
		srcs/utils/ft_find_from_bottom.c \
		srcs/utils/ft_init_chunck_info.c \
		srcs/utils/ft_find_pos_sorted.c \
		srcs/utils/ft_prepare_stack_b.c

OPERATIONS = srcs/operations/ft_sa.c \
			srcs/operations/ft_ra.c \
			srcs/operations/ft_rra.c \
			srcs/operations/ft_pb.c \
			srcs/operations/ft_sb.c \
			srcs/operations/ft_rb.c \
			srcs/operations/ft_rrb.c \
			srcs/operations/ft_pa.c

SORTERS = srcs/sorters/ft_sort_three.c \
			srcs/sorters/ft_sort_five.c \
			srcs/sorters/ft_sort_hundred.c

SRCS = srcs/main.c \
	${UTILS} \
	${LIB} \
	${CHECKERS} \
	${OPERATIONS} \
	${SORTERS}

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
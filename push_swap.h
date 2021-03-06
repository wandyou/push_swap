/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 23:44:44 by nlafarge          #+#    #+#             */
/*   Updated: 2021/09/10 21:20:16 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>

# define INT_MIN -2147483648
# define INT_MAX 2147483647

typedef struct s_num_hold
{
	int	pos;
	int	val;
	int	moves;
}	t_num_hold;

typedef struct s_stack
{
	int	*nums;
	int	size;
}	t_stack;

typedef struct s_chunck
{
	int	i;
	int	min;
	int	max;
	int	size;
}	t_chunck;

typedef struct s_ps
{
	int			nb_nums;
	int			*tmp_a;
	int			*tmp_b;
	t_stack		tab_a;
	t_stack		tab_b;
	int			*sorted;
	t_chunck	chunck;
	t_num_hold	top;
	t_num_hold	bottom;
	int			chunck_count;
	int			pos_max;
}	t_ps;

/*
** MAIN
*/
int			main(int argc, char **argv);
void		main2(t_ps *ps);

/*
** UTILS
*/
void		ft_error(int clean_success, char *msg);
void		ft_success(int clean_success, char *msg);
int			ft_clean(t_ps *ps);
int			ft_is_sorted(int *tab, int len);
void		ft_print_stack(int *stack, int len);
void		ft_struct_init(t_ps *ps);
void		ft_exit(int clean_success);
void		ft_stack_a_malloc(t_ps *ps);
void		ft_stack_tmp_a_malloc(t_ps *ps, int resize);
void		ft_stack_tmp_b_malloc(t_ps *ps, int resize);
void		ft_stacks_tmp_malloc(t_ps *ps);
int			ft_find_min_pos(int *tab, int len);
void		ft_isloate_min(t_ps *ps);
int			ft_find_range(int *tab, int size);
void		ft_create_sorted_list(t_ps *ps);
void		ft_copy_list(int *src, int *dst, int len);
void		display_stacks(t_ps *ps);
void		ft_find_from_top(t_ps *ps);
void		ft_init_chunck_info(t_ps *ps, int chuncks);
int			ft_find_pos_sorted(t_ps *ps, int value);
void		ft_prepare_stack_b(t_ps *ps);
void		ft_bring_num_top(t_ps *ps);
int			ft_find_pos_b(t_ps *ps, int value);
void		ft_find_from_bottom(t_ps *ps);
void		ft_find_from_top(t_ps *ps);
void		ft_bring_num_top(t_ps *ps);

/*
** LIB
*/
long long	ft_atoi(const char *str);
int			ft_strlen(char *str);

/*
** CHECKERS
*/
int			ft_check_arg(char *arg);
int			ft_check_num(long long num);
int			ft_check_duplicate(int *stack, int len, int num);

/*
** OPERATIONS
*/
void		ft_sa(t_ps *ps);
void		ft_ra(t_ps *ps);
void		ft_ra_times(t_ps *ps, int times);
void		ft_rra(t_ps *ps);
void		ft_rra_times(t_ps *ps, int times);
void		ft_pb(t_ps *ps);
void		ft_sb(t_ps *ps);
void		ft_rb(t_ps *ps);
void		ft_rb_times(t_ps *ps, int times);
void		ft_rrb(t_ps *ps);
void		ft_rrb_times(t_ps *ps, int times);
void		ft_pa(t_ps *ps);

/*
** SORTERS
*/
void		ft_sort(t_ps *ps);
void		ft_sort_three(t_ps *ps);
void		ft_sort_five(t_ps *ps);
void		ft_sort_hundred(t_ps *ps, int chuncks);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 23:44:44 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/24 01:03:34 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>

# define INT_MIN -2147483648
# define INT_MAX 2147483647

typedef	struct s_stack
{
	int *nums;
}	t_stack;

typedef struct s_ps
{
	int		nb_nums;
	t_stack	tab_a;
}	t_ps;

/*
** MAIN
*/
int			main(int argc, char **argv);

/*
** UTILS
*/
void		ft_error(int clean_success, char *msg);
int			ft_clean(t_ps *ps);
int			ft_is_sorted(int *tab, int len);
void		ft_print_stack(int *stack, int len);
void		ft_struct_init(t_ps *ps);
void		ft_exit(int clean_success);

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

#endif
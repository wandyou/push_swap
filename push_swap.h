/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:47:28 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/23 22:22:37 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include <stdlib.h>

# define INT_MIN -2147483648
# define INT_MAX 2147483647

typedef struct s_ps
{
    int nb_nums;
} t_ps;

/*
** MAIN
*/
int main(int argc, char **argv);

/*
** UTILS
*/
void	ft_error(int clean_success, char *msg);
int	        ft_clean(t_ps *ps);

/*
** LIB
*/
long long		ft_atoi(const char *str);
int             ft_strlen(char *str);

/*
** CHECKERS
*/
int     ft_check_arg(char *arg);
int     ft_check_num(long long num);

#endif
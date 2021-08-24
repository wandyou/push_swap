/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:10:39 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/24 23:22:54 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_struct_init(t_ps *ps)
{
	ps->nb_nums = 0;
	ps->tmp_a = NULL;
	ps->tmp_b = NULL;
	ps->tab_a.nums = NULL;
	ps->tab_b.nums = NULL;
	ps->tab_a.size = 0;
	ps->tab_b.size = 0;
}

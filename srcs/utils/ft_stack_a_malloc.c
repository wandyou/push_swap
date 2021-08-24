/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_a_malloc.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 01:09:03 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/24 23:30:15 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_stack_a_malloc(t_ps *ps)
{
	ps->tab_a.nums = (int *)malloc(ps->tab_a.size * sizeof(int));
	if (!ps->tab_a.nums)
		ft_error(ft_clean(ps), "Malloc of stack failed ...");
}

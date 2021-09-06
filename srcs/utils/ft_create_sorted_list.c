/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_sorted_list.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 19:04:53 by nlafarge          #+#    #+#             */
/*   Updated: 2021/09/07 00:32:13 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void ft_create_sorted_list(t_ps *ps)
{
	int size;
	int min;

	size = 0;
	min = INT_MIN;
	ps->sorted = (int *)malloc(ps->tab_a.size * sizeof(int));
	if (!ps->sorted)
		ft_error(ft_clean(ps), "Malloc of sorted stack failed ...");

	ft_copy_list(ps->tab_a.nums, ps->sorted, ps->tab_a.size);
	
	while (!ft_is_sorted(ps->sorted, ps->tab_a.size))
	{
		
	}
}
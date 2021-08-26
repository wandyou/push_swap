/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 00:47:55 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/08/27 01:00:34 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_pa(t_ps *ps)
{
	int	i;

	i = 0;
	ft_stack_tmp_b_malloc(ps, -1);
	ft_stack_tmp_a_malloc(ps, 1);
	ps->tmp_a[0] = ps->tab_b.nums[0];
	while (i < ps->tab_a.size)
	{
		ps->tmp_a[i + 1] = ps->tab_a.nums[i];
		i++;
	}
	free(ps->tab_a.nums);
	ps->tab_a.nums = ps->tmp_a;
	ps->tab_a.size++;
	i = 0;
	while (i < ps->tab_b.size)
	{
		ps->tmp_b[i] = ps->tab_b.nums[i + 1];
		i++;
	}
	free(ps->tab_b.nums);
	ps->tab_b.nums = ps->tmp_b;
	ps->tab_b.size--;
	printf("pa\n");
}

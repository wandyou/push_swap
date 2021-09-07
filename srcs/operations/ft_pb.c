/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 23:20:12 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/09/07 02:22:37 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_stacks_tmp_malloc(t_ps *ps)
{
	ft_stack_tmp_b_malloc(ps, 1);
	ft_stack_tmp_a_malloc(ps, -1);
}

void	ft_pb(t_ps *ps)
{
	int	i;

	if (ps->tab_a.size <= 0)
		return ;
	i = 0;
	ft_stacks_tmp_malloc(ps);
	ps->tmp_b[0] = ps->tab_a.nums[0];
	while (i < ps->tab_b.size)
	{
		ps->tmp_b[i + 1] = ps->tab_b.nums[i];
		i++;
	}
	free(ps->tab_b.nums);
	ps->tab_b.nums = ps->tmp_b;
	ps->tab_b.size++;
	i = 0;
	while (i < ps->tab_a.size - 1)
	{
		ps->tmp_a[i] = ps->tab_a.nums[i + 1];
		i++;
	}
	free(ps->tab_a.nums);
	ps->tab_a.nums = ps->tmp_a;
	ps->tab_a.size--;
	printf("pb\n");
}

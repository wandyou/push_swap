/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prepare_stack_b.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:33:10 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/09/10 16:42:13 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_prepare_stack_b(t_ps *ps)
{
	int	i;
	int	min;

	i = 0;
	min = -1;
	if (ps->tab_b.size == 0)
		return ;
	while (i < ps->tab_b.size)
	{
		if (ps->tab_b.nums[i] < ps->tab_a.nums[0])
		{
			if (min == -1)
				min = i;
			if (ps->tab_a.nums[0] - ps->tab_b.nums[i]
				< ps->tab_a.nums[0] - ps->tab_b.nums[min])
				min = i;
		}
		i++;
	}
	if (min == -1)
		min = ft_find_min_pos(ps->tab_b.nums, ps->tab_b.size) + 1;
	if (min <= (ps->tab_b.size / 2))
		ft_rb_times(ps, min);
	else
		ft_rrb_times(ps, (ps->tab_b.size - min));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 01:18:35 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/08/27 01:42:22 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_sort_three(t_ps *ps)
{
	int	top;
	int	middle;
	int	bottom;

	top = ps->tab_a.nums[0];
	middle = ps->tab_a.nums[1];
	bottom = ps->tab_a.nums[2];
	if (top > middle && middle < bottom && bottom > top)
		ft_sa(ps);
	else if (top > middle && middle > bottom && bottom < top)
	{
		ft_sa(ps);
		ft_rra(ps);
	}
	else if (top > middle && middle < bottom && bottom < top)
		ft_ra(ps);
	else if (top < middle && middle > bottom && bottom > top)
	{
		ft_sa(ps);
		ft_ra(ps);
	}
	else if (top < middle && middle > bottom && bottom < top)
		ft_rra(ps);
}

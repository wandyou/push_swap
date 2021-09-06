/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 00:46:46 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/08/31 04:02:56 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_rrb(t_ps *ps)
{
	int	tmp;
	int	i;

	if (ps->tab_b.size >= 2)
	{
		i = ps->tab_b.size - 1;
		tmp = ps->tab_b.nums[ps->tab_b.size - 1];
		while (i > 0)
		{
			ps->tab_b.nums[i] = ps->tab_b.nums[i - 1];
			i--;
		}
		ps->tab_b.nums[0] = tmp;
	}
	printf("rrb\n");
}

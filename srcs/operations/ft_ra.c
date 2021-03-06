/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 22:46:36 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/09/10 14:23:01 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_ra_times(t_ps *ps, int times)
{
	int	i;

	i = 0;
	while (i < times)
	{
		ft_ra(ps);
		i++;
	}
}

void	ft_ra(t_ps *ps)
{
	int	tmp;
	int	i;

	if (ps->tab_a.size >= 2)
	{
		i = 0;
		tmp = ps->tab_a.nums[0];
		while (i < ps->tab_a.size - 1)
		{
			ps->tab_a.nums[i] = ps->tab_a.nums[i + 1];
			i++;
		}
		ps->tab_a.nums[i] = tmp;
	}
	printf("ra\n");
}

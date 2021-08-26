/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 00:44:47 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/08/27 01:15:01 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_rb(t_ps *ps)
{
	int	tmp;
	int	i;

	if (ps->tab_b.size >= 2)
	{
		i = 0;
		tmp = ps->tab_b.nums[0];
		while (i < ps->tab_b.size - 1)
		{
			ps->tab_b.nums[i] = ps->tab_b.nums[i + 1];
			i++;
		}
		ps->tab_b.nums[i] = tmp;
	}
	printf("rb\n");
}

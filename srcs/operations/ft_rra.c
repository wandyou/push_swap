/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 22:59:43 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/09/07 02:21:34 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_rra(t_ps *ps)
{
	int	tmp;
	int	i;

	if (ps->tab_a.size >= 2)
	{
		i = ps->tab_a.size - 1;
		tmp = ps->tab_a.nums[ps->tab_a.size - 1];
		while (i > 0)
		{
			ps->tab_a.nums[i] = ps->tab_a.nums[i - 1];
			i--;
		}
		ps->tab_a.nums[i] = tmp;
	}
	printf("rra\n");
}

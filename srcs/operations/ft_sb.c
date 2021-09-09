/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 00:16:55 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/09/09 23:59:34 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_sb(t_ps *ps)
{
	int	tmp;

	tmp = ps->tab_b.nums[1];
	ps->tab_b.nums[1] = ps->tab_b.nums[0];
	ps->tab_b.nums[0] = tmp;
	printf("sb\n");
	display_stacks(ps);
}

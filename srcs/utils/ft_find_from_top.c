/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_from_top.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:10:10 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/09/10 16:42:23 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_find_from_top(t_ps *ps)
{
	int	i;

	i = 0;
	while (ps->tab_a.nums[i] < ps->chunck.min
		|| ps->tab_a.nums[i] > ps->chunck.max)
		i++;
	ps->top.pos = i;
	ps->top.val = ps->tab_a.nums[i];
	ps->top.moves = i;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_from_bottom.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:11:04 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/09/10 16:11:13 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_find_from_bottom(t_ps *ps)
{
	int	i;
	
	i = ps->tab_a.size - 1;
	while (ps->tab_a.nums[i] < ps->chunck.min || ps->tab_a.nums[i] > ps->chunck.max)
		i--;
	ps->bottom.pos = i;
	ps->bottom.val = ps->tab_a.nums[i];
	ps->bottom.moves = (ps->tab_a.size - i) + 1;
}

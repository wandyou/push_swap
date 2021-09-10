/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bring_num_top.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:43:41 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/09/10 16:55:57 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_bring_num_top(t_ps *ps)
{
	if (ps->top.moves <= ps->bottom.moves)
		ft_ra_times(ps, ps->top.moves);
	else
		ft_rra_times(ps, ps->bottom.moves - 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isolate_min.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 00:57:02 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/31 01:42:40 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_isloate_min(t_ps *ps)
{
	int	min_pos;

	min_pos = ft_find_min_pos(ps->tab_a.nums, ps->tab_a.size);
	while (min_pos != 0)
	{
		if (min_pos < 2)
			ft_ra(ps);
		else
			ft_rra(ps);
		min_pos = ft_find_min_pos(ps->tab_a.nums, ps->tab_a.size);
	}
	ft_pb(ps);
}

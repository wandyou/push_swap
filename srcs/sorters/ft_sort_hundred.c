/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_hundred.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 01:44:07 by nlafarge          #+#    #+#             */
/*   Updated: 2021/09/10 16:38:01 by nathanlafar      ###   ########.fr       */
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

int	ft_find_pos_b(t_ps *ps, int value)
{
	int	i;
	
	i = 0;
	while (i < ps->tab_b.size)
	{
		if (ps->tab_b.nums[i] == value)
			return (i);
		i++;
	}
	return (i);
}

void	ft_sort_hundred(t_ps *ps, int chuncks)
{
	int	i;
	int	pos_max;
	int	chunck_count;

	ft_create_sorted_list(ps);
	i = 0;
	chunck_count = 0;
	ps->chunck.size = ps->nb_nums / chuncks;
	ps->chunck.i = 0;
	while (i < ps->nb_nums)
	{
		if (chunck_count == ps->chunck.size && ps->chunck.i < chuncks)
		{
			chunck_count = 0;
			ps->chunck.i++;
		}
		ft_init_chunck_info(ps, chuncks);
		ft_find_from_top(ps);
		ft_find_from_bottom(ps);
		ft_bring_num_top(ps); 
		ft_prepare_stack_b(ps);
		ft_pb(ps);
		i++;
		chunck_count++;
	}
	pos_max = ft_find_pos_b(ps, ps->sorted[ps->nb_nums - 1]);
	if (pos_max <= (ps->tab_b.size / 2))
		ft_rb_times(ps, pos_max);
	else
		ft_rrb_times(ps, (ps->tab_b.size - pos_max));
	i = 0;
	while (i < ps->nb_nums)
	{
		ft_pa(ps);
		i++;
	}
}

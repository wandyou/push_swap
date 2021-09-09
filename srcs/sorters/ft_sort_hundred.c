/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_hundred.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 01:44:07 by nlafarge          #+#    #+#             */
/*   Updated: 2021/09/09 05:39:45 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_find_from_top(t_ps *ps)
{
	int	i;
	
	i = 0;
	while (ps->tab_a.nums[i] < ps->chunck.min || ps->tab_a.nums[i] > ps->chunck.max)
		i++;
	ps->top.pos = i;
	ps->top.val = ps->tab_a.nums[i];
	ps->top.moves = i;
}

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

void	ft_bring_num_top(t_ps *ps)
{
	if (ps->top.moves <= ps->bottom.moves)
		ft_ra_times(ps, ps->top.moves);
	else
		ft_rra_times(ps, ps->bottom.moves - 1);
}

void	ft_init_chunck_info(t_ps *ps, int chuncks)
{
	ps->chunck.size = ps->nb_nums / chuncks;
	if (ps->chunck.i == chuncks - 1)
	{
		ps->chunck.size = ps->nb_nums - ((chuncks - 1) * ps->chunck.size);
		//printf("Chunck size : %d\n", ps->chunck.size);
		ps->chunck.min = ps->sorted[ps->nb_nums - ps->chunck.size];
		//printf("Chunck min : %d\n", ps->chunck.min);
		ps->chunck.max = ps->sorted[ps->nb_nums - 1];
		//printf("Chunck max : %d\n\n", ps->chunck.max);
	}
	else
	{	
		//printf("Chunck size : %d\n", ps->chunck.size);
		ps->chunck.min = ps->sorted[ps->chunck.size * ps->chunck.i];
		//printf("Chunck min : %d\n", ps->chunck.min);
		ps->chunck.max = ps->sorted[(ps->chunck.size * ps->chunck.i) + ps->chunck.size - 1];
		//printf("Chunck max : %d\n\n", ps->chunck.max);
	}
}

int	ft_find_pos_sorted(t_ps *ps, int value)
{
	int	i;
	
	i = 0;
	while (i < ps->nb_nums)
	{
		if (ps->sorted[i] == value)
			return (i);
		i++;
	}
	return (i);
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

void	ft_prepare_stack_b(t_ps *ps)
{
	int	i;
	int	min;
	
	if (ps->tab_b.size == 0)
		return ;
	i = 0;
	min = -1;
	while (i < ps->tab_b.size)
	{
		if (ps->tab_b.nums[i] < ps->tab_a.nums[0])
		{
			if (min == -1)
				min = i;
			else if (ps->tab_a.nums[0] - ps->tab_b.nums[min] >= ps->tab_a.nums[0] - ps->tab_b.nums[min])
				min = i;
		}
		i++;
	}
	if (min <= (ps->tab_b.size / 2))
		ft_rb_times(ps, min);
	else
		ft_rrb_times(ps, (ps->tab_b.size - min));
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
		if (chunck_count == ps->chunck.size && ps->chunck.i < 5)
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
	ft_print_stack(ps->tab_a.nums, ps->tab_a.size);
}

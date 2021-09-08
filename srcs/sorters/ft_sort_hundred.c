/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_hundred.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 01:44:07 by nlafarge          #+#    #+#             */
/*   Updated: 2021/09/09 01:48:25 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_find_first(t_ps *ps)
{
	int	i;
	int pos;
	int mediane;
	
	i = 0;
	mediane = ps->tab_a.size / 2;
	while (i < ps->tab_a.size)
	{
		if (ps->tab_a.nums[i] >= ps->chunck.min && ps->tab_a.nums[i] <= ps->chunck.max)
			pos = i;
	}
}

void	ft_init_chunck_info(t_ps *ps, int chuncks)
{
	ps->chunck.size = ps->nb_nums / chuncks;
	if (ps->chunck.i == chuncks - 1)
	{
		ps->chunck.size = ps->nb_nums - ((chuncks - 1) * ps->chunck.size);
		printf("Chunck size : %d\n", ps->chunck.size);
		ps->chunck.min = ps->sorted[ps->nb_nums - ps->chunck.size];
		printf("Chunck min : %d\n", ps->chunck.min);
		ps->chunck.max = ps->sorted[ps->nb_nums - 1];
		printf("Chunck max : %d\n\n", ps->chunck.max);
	}
	else
	{	
		printf("Chunck size : %d\n", ps->chunck.size);
		ps->chunck.min = ps->sorted[ps->chunck.size * ps->chunck.i];
		printf("Chunck min : %d\n", ps->chunck.min);
		ps->chunck.max = ps->sorted[(ps->chunck.size * ps->chunck.i) + ps->chunck.size - 1];
		printf("Chunck max : %d\n\n", ps->chunck.max);
	}
}

void	ft_sort_hundred(t_ps *ps, int chuncks)
{
	int	i;
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
		ft_find_first(ps);
		i++;
		chunck_count++;
	}
}

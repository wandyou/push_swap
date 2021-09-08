/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_sorted_list.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 19:04:53 by nlafarge          #+#    #+#             */
/*   Updated: 2021/09/08 15:11:19 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_create_sorted_list(t_ps *ps)
{
	int	size;
	int	min;
	int	i;
	int	tmp;

	size = 0;
	min = INT_MIN;
	ps->sorted = (int *)malloc(ps->tab_a.size * sizeof(int));
	if (!ps->sorted)
		ft_error(ft_clean(ps), "Malloc of sorted stack failed ...");
	ft_copy_list(ps->tab_a.nums, ps->sorted, ps->tab_a.size);
	while (!ft_is_sorted(ps->sorted, ps->tab_a.size))
	{
		i = 0;
		while (i < ps->tab_a.size - 1)
		{
			if (ps->sorted[i] > ps->sorted[i + 1])
			{
				tmp = ps->sorted[i + 1];
				ps->sorted[i + 1] = ps->sorted[i];
				ps->sorted[i] = tmp;
			}
			i++;
		}
	}
}

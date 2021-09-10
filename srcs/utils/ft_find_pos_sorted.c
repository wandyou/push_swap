/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_pos_sorted.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:19:52 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/09/10 16:20:09 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

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

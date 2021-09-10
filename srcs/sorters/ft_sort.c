/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:57:23 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/09/10 20:05:20 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_sort(t_ps *ps)
{
	if (ps->nb_nums == 2)
		ft_sa(ps);
	else if (ps->nb_nums == 3)
		ft_sort_three(ps);
	else if (ps->nb_nums <= 5)
		ft_sort_five(ps);
	else if (ps->nb_nums <= 100)
	{
		ft_sort_hundred(ps, 5);
		free(ps->sorted);
	}
	else
	{
		ft_sort_hundred(ps, 11);
		free(ps->sorted);
	}
	ft_clean(ps);
}
